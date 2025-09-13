package l3

type Analytics struct {
	MessagesTotal     int
	MessagesFailed    int
	MessagesSucceeded int
}

type Message struct {
	Recipient string
	Success   bool
}

// don't touch above this line

func analyzeMessage(analytics *Analytics, message Message) {
	switch(message.Success) {
	case true:
		analytics.MessagesSucceeded++
	case false:
		analytics.MessagesFailed++
	}
	analytics.MessagesTotal++
}
