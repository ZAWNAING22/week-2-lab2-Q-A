/*Q.4 using the two positive numbers given in the main function ,
 find the largest common divisor of these 
numbers using a recursive function*/
#include <stdio.h>

int gcd(int , int );

int main()
{
	int n1, n2;
	printf(" enter the two nums: ");
	scanf(" %d %d", &n1, &n2);
	printf(" the gcd of %d and %d  = %d" ,n1,n2, gcd(n1,n2));
	return 0;
}

int gcd( int r, int t)
{
	if(t==0)
	return r;
	else
	return gcd(t,r%t);
}

