package main

import (
	"fmt"
	"math/rand"
)

func binary_search(array []int, searched int) bool {
	for len(array) > 0 {
		mid := len(array) / 2
		value := array[mid]
		if value == searched {
			return true
		} else if searched > value {
			if mid+1 == len(array) {
				return false
			}
			array = array[mid+1:]
		} else {
			if mid-1 < 0 {
				return false
			}
			array = array[0:mid]
		}
	}
	return false
}

func main() {
	var array [100]int
	for index, _ := range array {
		array[index] = rand.Int() % 1000 // 0 ... 999
	}
	sort(array[:], "ascending")
	fmt.Println("sorted random array:")
	fmt.Println(array)
	var search int
	fmt.Scanf("%d", &search)
	if binary_search(array[:], search) {
		fmt.Println("number in array")
	} else {
		fmt.Println("number not in array")

	}
}

func sort(array []int, order string) {
	switch order {
	case "ascending":
		for i := 1; i < len(array); i++ {
			pos := i
			for pos > 0 && array[pos-1] > array[pos] {
				tmp := array[pos-1]
				array[pos-1] = array[pos]
				array[pos] = tmp
				pos--
			}
		}
	case "descending":
		for i := 1; i < len(array); i++ {
			pos := i
			for pos > 0 && array[pos-1] < array[pos] {
				tmp := array[pos-1]
				array[pos-1] = array[pos]
				array[pos] = tmp
				pos--
			}
		}
	default:
		for _, v := range array {
			fmt.Printf("%v ", v)
		}
		fmt.Println()
	}
}
