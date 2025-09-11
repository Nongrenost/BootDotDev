package l18

func isValidPassword(password string) bool {
	minLength := 5
	maxLength := 12
	containsUpper := false
	containsDigit := false

	if len(password) > maxLength || len(password) < minLength {
		return false
	}

	for _, c := range password {
		if c >= 'A' && c <= 'Z' {
			containsUpper = true
		}

		if c >= '0' && c <= '9' {
			containsDigit = true
		} 
	}
	
	if containsDigit && containsUpper {
		return true
	}

	return false
}
