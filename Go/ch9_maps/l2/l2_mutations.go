package l2

import "errors"

func deleteIfNecessary(users map[string]user, name string) (deleted bool, err error) {
	if _, ok := users[name]; !ok {
		return false, errors.New("not found")
	}
	if !users[name].scheduledForDeletion {
		return false, nil
	}

	delete(users, name)
	return true, nil

}

type user struct {
	name                 string
	number               int
	scheduledForDeletion bool
}
