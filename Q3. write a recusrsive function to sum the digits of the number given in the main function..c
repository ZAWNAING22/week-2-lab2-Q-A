//Q3. write a recusrsive function to sum the digits of the number given in the main function.
#include <stdio.h>


int sumDigit(int x)
{
	if(x==0)
	return x;
	else
	return x%10+ sumDigit(x/10);
	
}
int main()
{
	int n;
	printf(" enter a number ");
	scanf(" %d ", &n);
	printf(" the sum digits of %d = %d", n, sumDigit(n) );
	return 0;
}


