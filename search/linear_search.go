package main

import "fmt"

func search(what int, array []int) bool {
	for _, value := range array {
		if what == value {
			return true
		}
	}
	return false
}

func main() {
	array := [...]int{6, 1, 3, 3, 7, 10, 4, 4, 6, 3, 122, 381, 615, 480, 221, 98, 563, 28, 626, 439, 9, 7, 10, 10, 7, 10, 3, 5, 10, 4}
	fmt.Println("Enter a number to search in program's array")
	var i int
	fmt.Scan(&i)
	if search(i, array[:]) {
		fmt.Println("Element in array")
	} else {
		fmt.Println("Element not in array")
	}
}
