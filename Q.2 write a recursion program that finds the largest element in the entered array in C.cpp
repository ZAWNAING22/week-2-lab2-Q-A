//Q.2 write a recursion program that finds the largest element in the entered array in C
#include <stdio.h>

int findMax(int arr[], int size);

int main()
{
	int i,size; 
	
	printf("enter the size of array ");
	scanf (" %d",&size);
	 int arr[size];
	for(i=0; i<size; i++)
	{
		printf(" arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	int max1 = findMax(arr, size);
	printf(" the maximum num = %d", max1);
	return 0;
	 
}

int findMax(int arr[], int size)
{
	if(size==1)
	return arr[0];
	else
	{
		int max2 = findMax(arr, size-1);
		if(arr[size-1] > max2)
		{
		return arr[size-1];
		}
		else
		{
		return  max2;
		}
	}
}
