#include<stdio.h>

int fibonnaci(int n)
{
	int ans;

	if(n == 1 || n == 2)
		ans = 1;
	else
		ans = fibonnaci(n-1) + fibonnaci(n-2);

	return ans;
	
}

int main()
{

	int result = fibonnaci(5);
	printf("%d\n",result );


