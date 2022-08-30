package main

import "fmt"

func sum(array []int) int {
	if len(array) == 0 {
		return 0
	}
	if len(array) == 1 {
		return array[0]
	}
	return array[0] + sum(array[1:])
}

func main() {
	array := [...]int{4, 2, 3, 7, 9, 11}
	var counted_sum int = sum(array[:])
	fmt.Println(counted_sum)
}
