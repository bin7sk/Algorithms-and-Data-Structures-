#include<stdio.h>
/*
	Selection sort
*/
int array[] = {53, 12, 66, 41, 14, 58, 41, 62, 33, 60, 20, 13, 4, 87, 73, 94, 93, 22, 98, 82, 97, 17, 54, 79, 67, 45, 27, 55, 59, 56, 37, 69, 55, 23, 5, 9, 12, 77, 15, 23, 86, 67, 70, 6, 2, 50, 32, 23, 58, 33, 61, 49, 91, 84, 41, 91, 12, 86, 85, 32, 19, 68, 28, 39, 15, 86, 34, 90, 71, 66, 54, 75, 20, 22, 88, 12, 35, 21, 24, 94, 96, 16, 93, 22, 91, 53, 13, 50, 36, 59, 47, 64, 5, 55, 2, 68, 31, 3, 41, 41};
#define SIZE sizeof(array)/sizeof(int)
int main(void){
	for(int i=0;i<SIZE;i++){
		int min = array[i];
		int pos = i;
		for(int j=i+1;j<SIZE;j++){
			if(array[j]<min){
				min = array[j];
				pos = j;
			}
		}
		if(pos!=i){
			int tmp = array[i];
			array[i] = array[pos];
			array[pos] = tmp;		
		}	
	}
	printf("Sorted array(by selection sorting): \n");
	for(int i=0;i<SIZE;i++){
		printf("%d, ", array[i]);
	}
	putchar('\n');
	return 0;

}
