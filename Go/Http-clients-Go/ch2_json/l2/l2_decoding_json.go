package l2

import (
	"fmt"
	"net/http"
	"encoding/json"
)

func getIssues(url string) ([]Issue, error) {
	res, err := http.Get(url)
	if err != nil {
		return nil, fmt.Errorf("error creating request: %w", err)
	}
	defer res.Body.Close()

	issues := []Issue{}

	decoder := json.NewDecoder(res.Body)

	if err := decoder.Decode(&issues); err != nil {
		fmt.Println("error decoding response body")
		return issues, err
	}
	return issues, nil
}

