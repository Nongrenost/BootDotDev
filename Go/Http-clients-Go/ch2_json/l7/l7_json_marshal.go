package l7

import (
	"encoding/json"
)

func marshalAll[T any](items []T) ([][]byte, error) {
	marshalled := make([][]byte, len(items))

	for i, item := range items {
		data, err := json.Marshal(item)
		if err != nil {
			return nil, err
		}
		marshalled[i] = data
	}
	return marshalled, nil

}
