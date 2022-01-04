#include<stdio.h>
/*
	Bubble sorting 
 */
int array[] = {36, 54, 32, 5, 46, 23, 18, 72, 68, 2, 13, 32, 10, 74, 65, 38, 38, 46, 17, 28, 11, 6, 21, 86, 58, 36, 98, 39, 84, 21, 99, 27, 53, 28, 64, 11, 64, 23, 33, 92, 53, 85, 25, 96, 53, 32, 48, 74, 92, 53, 82, 70, 88, 86, 79, 27, 57, 96, 80, 4, 87, 65, 41, 27, 93, 38, 92, 9, 75, 47, 29, 99, 61, 23, 17, 26, 87, 69, 97, 85, 57, 77, 22, 24, 71, 23, 14, 58, 74, 47, 80, 79, 72, 99, 68, 79, 64, 90, 90, 14};

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble_sort(int arr[], int size){
	while(size){
		for(int i=0;i<size-1;i++){
			if(arr[i]>arr[i+1]) swap(&arr[i], &arr[i+1]);	
		}
		size--;
	}
}
void print_array(int arr[], int size){
	for(int i=0;i<size;i++) printf("%d, ", array[i]);
	putchar('\n');
}
#define SIZE sizeof(array)/sizeof(int)
int main(void){
	bubble_sort(array, SIZE);
	print_array(array, SIZE);
	return 0;
}
