#include<stdio.h>
/*
 Find prime factors of number
*/ 
 
void print_number_factors(int x);
int main(void)
{
	printf("Enter number to express as a product of prime numbers:\n");
	int x;
	scanf("%d", &x);
	print_number_factors(x);
	return 0;
}
void print_number_factors(int x)
{
	printf("prime number factors:\n");
	int divisor = 2;
	while(x!=1)
	{
		while(x%divisor == 0)
		{
			x /= divisor;
			printf("%d ", divisor);
		}
		divisor += 1;

	}
	putchar('\n');
}
