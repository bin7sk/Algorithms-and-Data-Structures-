package main

import "fmt"

func mergeSort(array []int) []int {
	if len(array) < 2 {
		return array
	}
	first := mergeSort(array[:len(array)/2])
	second := mergeSort(array[len(array)/2:])
	return merge(first, second)
}

func merge(a []int, b []int) []int {
	final := []int{}
	i := 0
	j := 0
	for i < len(a) && j < len(b) {
		if a[i] < b[j] {
			final = append(final, a[i])
			i++
		} else {
			final = append(final, b[j])
			j++
		}
	}
	for ; i < len(a); i++ {
		final = append(final, a[i])
	}
	for ; j < len(b); j++ {
		final = append(final, b[j])
	}
	return final
}

func main() {
	array := []int{3, 7, 4, 8, 9, 14, 19, 10, 12, 11, 7, 6, 5, 4, 3, 1, 0, 4, 7, 8, 21, 15, 27, 29, 40, 1}
	sorted := mergeSort(array)
	fmt.Println(sorted)
}
