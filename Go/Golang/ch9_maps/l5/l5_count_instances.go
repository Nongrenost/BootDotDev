package l5

func updateCounts(messagedUsers []string, validUsers map[string]int) {
	for _, u := range messagedUsers {
		if _, ok := validUsers[u]; ok {
			validUsers[u]++
		}
	}
}
