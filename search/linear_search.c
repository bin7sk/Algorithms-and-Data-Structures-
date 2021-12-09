#include<stdio.h>
/*
 Linear search
 Time complexity = O(n)
 */  
int main()
{
	int arr[] = {10, 20, 80, 30, 60, 50,  110, 100, 130, 170};
	int x;
	printf("Enter number to search:");
	scanf("%d", &x);
	for(int i=0;i<10;++i)
	{
		if(arr[i] == x)
		{
			printf("Found %d as arr[%d]\n", x, i);
			return 0;
		}
	}
	printf("Array doesn't contain your element\n");
	return 1;
}
