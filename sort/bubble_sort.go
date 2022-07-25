package main

import "fmt"

func swap(a *int, b *int) {
	tmp := *a
	*a = *b
	*b = tmp
}

func main() {
	array := []int{7, 78, 67, 87, 89, 54, 45, 46, 64, 17, 28, 82, 93, 39, 48, 84, 85, 58, 69, 48, 78, 10, 11, 454, 111, 1000, 100, 120}

	fmt.Println("Unordered array:")
	for i:=0; i<len(array); i++ {
		fmt.Printf("%v ", array[i])
	}
	fmt.Println()

	for length:=len(array)-1; length>=0; length-- {
		for i:=0; i < length; i++ {
			if array[i] > array[i+1] {
				swap(&array[i], &array[i+1])
			}
		}
	}

	fmt.Println("after bubble sort:")
	fmt.Println(array)

}
