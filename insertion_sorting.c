#include<stdio.h>

int factorial(int n)
{

	int fact = 1;
	int sum;

	if(n ==0)
		fact = 1;
	else
		fact  = n*factorial(n-1);

	return fact;
}

int main()
{

	int result = factorial(5);
	printf("%d\n",result );
}