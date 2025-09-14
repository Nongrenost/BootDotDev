package l6

func concurrentFib(n int) []int {
	fibs := []int{}

	ch := make(chan int)
	go fibonacci(n, ch)
	for v := range ch {
		fibs = append(fibs, v)
	}
	return fibs
}

// don't touch below this line

func fibonacci(n int, ch chan int) {
	x, y := 0, 1
	for i := 0; i < n; i++ {
		ch <- x
		x, y = y, x+y
	}
	close(ch)
}
