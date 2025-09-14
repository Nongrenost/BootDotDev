package l10

func getNameCounts(names []string) map[rune]map[string]int {
	nameCountsMap := map[rune]map[string]int{}
	for _, name := range names {
		nameSlice := []rune(name)
		firstChar := nameSlice[0]

		if _, ok := nameCountsMap[firstChar]; !ok {
			nameCountsMap[firstChar] = map[string]int{}
		} 
		nameCountsMap[firstChar][name]++
		
	}
	return nameCountsMap
}
