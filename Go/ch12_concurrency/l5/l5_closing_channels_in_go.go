package l5

func countReports(numSentCh chan int) int {
	totalSent := 0
	for ;true; {
		if v, ok := <- numSentCh; !ok {
			break
		} else {
			totalSent += v
		}
	}
	return totalSent

}

// don't touch below this line

func sendReports(numBatches int, ch chan int) {
	for i := 0; i < numBatches; i++ {
		numReports := i*23 + 32%17
		ch <- numReports
	}
	close(ch)
}
