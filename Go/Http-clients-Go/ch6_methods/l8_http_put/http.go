package main

import (
	"bytes"
	"encoding/json"
	"net/http"
	"fmt"
)

func updateUser(baseURL, id, apiKey string, data User) (User, error) {
	fullURL := baseURL + "/" + id
	
	user, err := json.Marshal(data)
	if err != nil {
		return User{}, fmt.Errorf("error while marshaling json: %w", err)
	}
	
	req, err := http.NewRequest("PUT", fullURL,bytes.NewBuffer(user))
	if err != nil {
		return User{}, fmt.Errorf("error while creating request: %w", err)
	}

	req.Header.Set("Content-Type", "application/json")
    req.Header.Set("X-API-Key", apiKey)

	client := &http.Client{}
	res, err := client.Do(req)
	if err != nil {
		return User{}, fmt.Errorf("error while making a request: %w", err)
	}
	defer res.Body.Close()

	var updatedUser User
	decoder := json.NewDecoder(res.Body)
	err = decoder.Decode(&updatedUser)
	if err != nil {
		return User{}, fmt.Errorf("error while decoding response: %w", err)
	}
	return  updatedUser, nil
}


func getUserById(baseURL, id, apiKey string) (User, error) {
	fullURL := baseURL + "/" + id
	req, err := http.NewRequest("GET", fullURL, nil)
	if err != nil {
		return User{}, fmt.Errorf("error while creating a request: %w", err)
	}

	req.Header.Set("X-API-Key", apiKey)

	client := &http.Client{}
	res, err := client.Do(req) 
	if err != nil {
		return User{}, fmt.Errorf("error while making a request: %w", err)
	}
	defer res.Body.Close()

	var user User
	decoder := json.NewDecoder(res.Body)
	err = decoder.Decode(&user)
	if err != nil {
		return User{}, fmt.Errorf("error while decoding response: %w", err)
	}

	return user, nil

}
