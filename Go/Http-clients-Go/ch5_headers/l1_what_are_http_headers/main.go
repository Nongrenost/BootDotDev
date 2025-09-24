package main

import (
	"net/http"
)

func getContentType(res *http.Response) string {
	contentType := res.Header.Get("Content-Type")
	return contentType
}
