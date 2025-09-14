package l13

func createMatrix(rows, cols int) [][]int {
	matrixSlice := make([][]int, rows)
	for i := 0; i < rows; i ++ {
		matrixSlice[i] = make([]int, cols)
		for j := 0; j < cols; j++ {
			matrixSlice[i][j] = i * j
		}
	}	
	return matrixSlice
}
