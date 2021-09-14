// Write a recursive C function to calculate the sum of digits of a number. Use this function in
// main to accept a number and print sum of its digits.

#include <stdio.h>
int recursionSumDigit(int n)
{
 if((n==0)||(n==1))
 {
 	return 1;
 }
 else
 {
 	return (n*recursionSumDigit(n-1));
 }
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);

	printf("fact of number is %d\n",recursionSumDigit(n));
	return 0;
}