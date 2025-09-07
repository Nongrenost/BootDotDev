package main

import (
	"fmt"

)

func printPrimes(max int) {
	for n := 2; n < max + 1; n++ {
		if n == 2 { fmt.Print(n, "\n"); continue }
		if n % 2 == 0 { continue }
		
		should_continue := false
		for i := 3; i * i <= n; i++ {
			if i % 2 == 0 { continue }  
			if n % i == 0 { should_continue = true; break }
		}
		if should_continue {
			continue
		}
		fmt.Print(n,"\n")
	}
}

// don't edit below this line

func test(max int) {
	fmt.Printf("Primes up to %v:\n", max)
	printPrimes(max)
	fmt.Println("===============================================================")
}

func main() {
	test(10)
	test(20)
	test(30)
}
