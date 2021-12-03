#include <stdio.h>
unsigned int fastEuclid(unsigned int a, unsigned int b);
int main(void)
{
	unsigned int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("GCD(a,b) = %d\n", fastEuclid(a, b));
	return 0;
}

unsigned int fastEuclid(unsigned int a, unsigned int b)
{
	for(;a; a%=b)
	{
		if(a<b)
		{
			unsigned t;
		        t = a;
			a = b;
			b = t;
		}

	}
	return b;
}
