#include<stdio.h>

int gcd(int m, int n)
{
	int ans;
	

	if(m%n == 0)
		ans = n;
	else
		ans = gcd(n,m%n);
	return ans;

}

int main()
{

	int result = gcd(5,10);
	printf("%d\n",result );

}
