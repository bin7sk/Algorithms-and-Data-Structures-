package main

import "fmt"

func main() {
	array := []int{4, 7, 8, 4, 1, 0 , 2, 100, 50, 70, 30, 32, 33, 33, 31, 27, 60, 90, 100, 15, 10, 11, 22, 28, 27, 24}
	fmt.Println("Unsorted array:")
	sort(array, "show unsorted")
	sort(array, "ascending")
	fmt.Println("Ascending order:")
	sort(array, "print sorted")
	sort(array, "descending")
	fmt.Println("descending order:")
	sort(array, "print descending")

}

func sort(array []int, order string) {
	switch order {
	case "ascending":
		for i:=1; i < len(array); i++ {
			pos := i
			for pos>0 && array[pos-1] > array[pos] {
				tmp := array[pos-1]
				array[pos-1] = array[pos]
				array[pos] = tmp
				pos--
			}
		}
	case "descending":
		for i:=1; i < len(array); i++ {
			pos := i
			for pos>0 && array[pos-1] < array[pos] {
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

