package main

type notification interface {
	importance() int
}

type directMessage struct {
	senderUsername string
	messageContent string
	priorityLevel  int
	isUrgent       bool
}

type groupMessage struct {
	groupName      string
	messageContent string
	priorityLevel  int
}

type systemAlert struct {
	alertCode      string
	messageContent string
}

func (notification directMessage) importance() (importance_score int) {
	if notification.isUrgent { return 50 }
	return notification.priorityLevel
}

func (notification groupMessage) importance() (importance_score int) {
	return notification.priorityLevel
}

func (notification systemAlert) importance() (importance_score int) {
	return 100
}

func processNotification(n notification) (string, int) {
	switch v := n.(type) {
	case directMessage: return v.senderUsername, v.importance()
	case groupMessage: return v.groupName, v.importance()
	case systemAlert: return  v.alertCode, v.importance()
	default: return "", 0
	}

}
