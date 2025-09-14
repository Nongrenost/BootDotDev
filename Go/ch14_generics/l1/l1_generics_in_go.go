package l1

func getLast[T any](s []T) T {
	if len(s) == 0 {
		var zeroVal T
		return zeroVal
	}

	return s[len(s)-1]
}
