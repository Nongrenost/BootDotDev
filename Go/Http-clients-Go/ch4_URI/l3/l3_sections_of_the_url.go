package l3

import (
	"net/url"
)

func newParsedURL(urlString string) ParsedURL {
	parsedUrl, err := url.Parse(urlString)
	if err != nil {
		return ParsedURL{}
	}


	password, _ := parsedUrl.User.Password() 

	parsed := ParsedURL{
		protocol: parsedUrl.Scheme,
		username: parsedUrl.User.Username(),
		password: password,
		hostname: parsedUrl.Hostname(),
		port:     parsedUrl.Port(),
		pathname: parsedUrl.Path,
		search:   parsedUrl.RawQuery,
		hash:     parsedUrl.Fragment,
	}

	return parsed
}
