package main

import "fmt"

func fizzbuzz() {
	for i := 1; i <= 100; i++ {
		if i % 3 == 0 && i % 5 == 0 {
			fmt.Print("fizzbuzz\n")
			continue
		}
		if i % 3 == 0 {
			fmt.Print("fizz\n")
			continue
		}
		if i % 5 == 0 {
			fmt.Print("buzz\n")
			continue
		}	
	}
}

// don't touch below this line

func main() {
	fizzbuzz()
}
