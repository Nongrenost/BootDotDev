package l11
import ( "strings")

func countDistinctWords(messages []string) int {
	words := map[string]struct{}{}
	var wordsCount int

	for _, message := range messages {
		messageWords := strings.Fields(message)
		for _, word := range messageWords {
			lowerWord := strings.ToLower(word)
			if _, ok := words[lowerWord]; !ok {
				words[lowerWord] = struct{}{}
				wordsCount++
			}
		}
	}
	
	return  wordsCount

}
