package main

func getMessageWithRetries(primary, secondary, tertiary string) ([3]string, [3]int) {
	messages := [3]string{ primary, secondary, tertiary }

	var costs [3]int
	
	lenPrevious := 0

	for i := 0; i < len(messages); i++ {
		messageLength := len(messages[i]) 
		costs[i] = messageLength + lenPrevious
		lenPrevious += messageLength
	}
	return messages, costs
}
