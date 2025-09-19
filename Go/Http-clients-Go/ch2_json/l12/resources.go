package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
	"sort"
)

func getResources(url string) ([]map[string]any, error) {
	var resources []map[string]any

	res, err := http.Get(url)
	if err != nil {
		return resources, err
	}

	defer res.Body.Close()


	data, err := io.ReadAll(res.Body)
	if err != nil {
		return  nil, err
	}
	
	json.Unmarshal([]byte(data), &resources)

	return resources, nil

}

func logResources(resources []map[string]any) {
	var formattedStrings []string

	sort.Strings(formattedStrings)

	for _, mapObj := range resources {
		for key, val := range mapObj {
			formattedStrings = append(formattedStrings, fmt.Sprintf("Key: %s - Value: %v", key, val))
		}
	}

	sort.Strings(formattedStrings)

	for _, str := range formattedStrings {
		fmt.Println(str)
	}
}
