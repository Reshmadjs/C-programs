// Write a recursive function to calculate the sum of digits of a number till you get a single digit
// number. Example: 961 -> 16 -> 5. (Note: Do not use a loop)

#include <stdio.h>
int singleDigit(int n)
{
  return ((n==0)? n:((n%10)+singleDigit(n/10)));
  
}
int singleDigitCall(int n)
{
  int ans=singleDigit(n);
  return (((n/10)==0)? n:singleDigitCall(ans));
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	printf("ans=%d",singleDigitCall(n));
	return 0;
}