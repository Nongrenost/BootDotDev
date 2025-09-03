package main

import "fmt"

func (e email) cost() int {
	if !e.isSubscribed {
		return 5 * len(e.body)
	}

	return  2 * len(e.body)

}

func (e email) format() string {
	status := ""

	if !e.isSubscribed {
		status = "Not Subscribed"
	} else {
		status = "Subscribed"
	}
	return fmt.Sprintf("'%s' | %s", e.body, status)
}

type expense interface {
	cost() int
}

type formatter interface {
	format() string
}

type email struct {
	isSubscribed bool
	body         string
}
