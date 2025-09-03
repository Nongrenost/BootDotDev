package main

type User struct {
	Membership
	Name string
}

type Membership struct {
	Type             string
	MessageCharLimit int
}

func newUser(name string, membershipType string) User {
	switch membershipType {
	case "premium":
		return User{
			Name: name,
			Membership: Membership{
				Type:             membershipType,
				MessageCharLimit: 1000},
			}
	default:
		return User{
			Name: name,
			Membership: Membership{
				Type:             membershipType,
				MessageCharLimit: 100},
			}
			
	}
}
