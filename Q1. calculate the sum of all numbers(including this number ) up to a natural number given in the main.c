/*Q1. calculate the sum of all numbers(including this number ) up to a natural number given in the main 
function using a recursibe fucntion in c*/

#include <stdio.h>


int sum(int x)
{
	if(x==0)
	return x;
	else
	return x+ sum(x-1);
}

int main()
{
	int n;
	printf("enter a positve integer: ");
	scanf(" %d", &n);
	printf(" the sum of all nums up to %d = %d", n, sum(n) );
	return 0;
}
