package main
import( "fmt")


type formatter interface {
	format() string
}

type plainText struct {
	message string
}

type bold struct {
	message string
}

type code struct {
	message string
}

func (s plainText) format() string {
	return s.message
}
func (s bold) format() string {
	return fmt.Sprintf("**%s**", s.message)
}
func (s code) format() string {
	return fmt.Sprintf("`%s`", s.message)
}

// Don't Touch below this line

func sendMessage(format formatter) string {
	return format.format() // Adjusted to call Format without an argument
}
