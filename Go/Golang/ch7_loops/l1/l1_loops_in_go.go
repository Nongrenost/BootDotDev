package main

func bulkSend(numMessages int) float64 {
	total_cost := 0.0
	additional_fee := 0.0
	for i := 0; i < numMessages; i++ {
		total_cost += 1 + additional_fee
		additional_fee += 0.01
	}
	
	return  total_cost
}
