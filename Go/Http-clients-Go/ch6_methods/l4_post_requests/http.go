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
		return User{}, fmt.Errorf("error while marshaling json: ", err)
	}


	req, err := http.NewRequest("POST", url, bytes.NewBuffer(user))
	if err != nil {
		return User{}, fmt.Errorf("error while creating requst: ", err)
	}

	req.Header["Content-Type"] = append(req.Header["Content-Type"], "application/json" )
	req.Header["X-API-key"] = append(req.Header["X-API-key"], apiKey)
	res, err := http.DefaultClient.Do(req) 
	if err != nil {
		return User{}, fmt.Errorf("error while getting a responce: ", err)
	}

	defer res.Body.Close()
	
	var respondUser User
	decoder := json.NewDecoder(res.Body)
	err = decoder.Decode(&respondUser)
	if err != nil {
		return User{}, fmt.Errorf("error while decoding json: ", err)
	}

	return respondUser, nil

}
