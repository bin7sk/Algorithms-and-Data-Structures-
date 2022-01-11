#include<stdio.h>
/*binary search*/
int arrayofintegers[] = {2, 4, 5, 6, 9, 10, 11, 11, 13, 14, 14, 17, 17, 18, 21, 21, 22, 23, 23, 23, 23, 24, 25, 26, 27, 27, 27, 28, 28, 29, 32, 32, 32, 33, 36, 36, 38, 38, 38, 39, 41, 46, 46, 47, 47, 48, 53, 53, 53, 53, 54, 57, 57, 58, 58, 61, 64, 64, 64, 65, 65, 68, 68, 69, 70, 71, 72, 72, 74, 74, 74, 75, 77, 79, 79, 79, 80, 80, 82, 84, 85, 85, 86, 86, 87, 87, 88, 90, 90, 92, 92, 92, 93, 96, 96, 97, 98, 99, 99, 99};
#define ARR_SIZE sizeof(arrayofintegers)/sizeof(arrayofintegers[0])
int binsearch(int what, int array[], int size);
int main(void){
	printf("Enter element to search in array: ");
	int n;
	scanf("%d", &n);
	int i = binsearch(n, arrayofintegers, ARR_SIZE);
	if(i==-1){
		printf("Nothing found\n");
	}
	else{
		printf("array[%d] = %d\n", i, arrayofintegers[i]);
	}
	return 0;
}
int binsearch(int what, int array[], int size){
	int low = 0, high = size - 1;
	int mid;
	while(low<=high){
		mid = (high + low)/2;
		if(what<array[mid])
			high = mid - 1;
		else if(what>array[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
