package main

func countConnections(groupSize int) int {
	if groupSize == 0 { return 0 }
	if groupSize == 1 { return 0 }
	num_connections := 0
	connection_increase := 0
	for user := 2; user <= groupSize; user++ {
		connection_increase += 1
		num_connections += connection_increase
	} 
	return num_connections
}
