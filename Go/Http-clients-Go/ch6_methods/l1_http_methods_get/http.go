package main

import (
	"encoding/json"
	"fmt"
	"net/http"
)

func getUsers(url string) ([]User, error) {
	res, err := http.Get(url)
	if err != nil {
		return nil, fmt.Errorf("error getting response: %v", err)
	}
	defer res.Body.Close()
	var users []User
	decoder := json.NewDecoder(res.Body)
	if err := decoder.Decode(&users); err != nil {
		return nil, fmt.Errorf("error decoding json %v", err)
	}
	return users, nil
}
