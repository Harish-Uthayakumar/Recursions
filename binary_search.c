#include<stdio.h>

int binary_search(int a[], int start, int end, int key)


{
	

	int mid = (start + end)/2;

	if(start>end)
		return -1;
	
	if(a[mid] == key)
	{
		return mid;
	}

	
			if(a[mid] < key)
			{
				
				return binary_search(a,mid+1,end,key);
			}
			else
				return binary_search(a, start, mid -1, key);
				
		


}

int main()
{
	int y[4] = {1,2,3,4};
	int result = binary_search(y,0,3,4);
	printf("%d\n",result );

}

