package main

import (
	"fmt"
	"bytes"
	"encoding/json"
	"net/http"

)

func createUser(url, apiKey string, data User) (User, error) {
	user, err := json.Marshal(data)
	if err != nil {
		return User{}, fmt.Errorf("error while marshaling json: %w", err)
	}


	req, err := http.NewRequest("POST", url, bytes.NewBuffer(user))
	if err != nil {
		return User{}, fmt.Errorf("error while creating request: %w", err)
	}

	req.Header.Set("Content-Type", "application/json")
    req.Header.Set("X-API-Key", apiKey)
	res, err := http.DefaultClient.Do(req) 
	if err != nil {
		return User{}, fmt.Errorf("error while getting a response: %w", err)
	}

	defer res.Body.Close()
	
	var respondUser User
	decoder := json.NewDecoder(res.Body)
	err = decoder.Decode(&respondUser)
	if err != nil {
		return User{}, fmt.Errorf("error while decoding json: %w", err)
	}

	return respondUser, nil

}
