package main

func maxMessages(thresh int) int {
	maxNumMessages := 0
	messageCost := 100

	for i := 0; ; i++ {
		if thresh < messageCost {
			break
		}
		thresh -= (messageCost + i)
		maxNumMessages++
	}

	return maxNumMessages

}
