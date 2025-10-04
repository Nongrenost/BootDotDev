package main

import (
	"fmt"
)

func fetchTasks(baseURL, availability string) []Issue { 
	fullURL := baseURL

	var limit int
	switch(availability) {
	case "Low":
		limit = 1
	case "Medium":
		limit = 3
	case "High":
		limit = 5
	}

	fullURL = fullURL + fmt.Sprintf("?sort=estimate&limit=%d", limit)

	return getIssues(fullURL)
}

