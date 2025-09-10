package l2

import (
	"errors"
)

const (
	planFree = "free"
	planPro  = "pro"
)

func getMessageWithRetriesForPlan(plan string, messages [3]string) ([]string, error) {
	switch (plan){
	case planFree:
		return messages[:2], nil
	case planPro:
		return messages[:], nil
	default :
		return nil, errors.New("unsupported plan")
	}
}
