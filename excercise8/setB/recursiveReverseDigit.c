// Write a recursive C function to print the digits of a number in reverse order. Use this function
// in main to accept a number and print the digits in reverse order separated by tab.
// Example 3456
// 3  4  5  6

// (Hint: Recursiveprint(n) = print n if n is single digit number
// = print n % 10 + tab + Recursiveprint( n/10)

#include <stdio.h>
int recursiveReverseDigit(int n)
{
  
  printf("%d\t",n%10);
  if(n/10==0)
  {
  	return n;
  }
  else
  {
  return recursiveReverseDigit(n/10);
  }
}

int main(int argc, char const *argv[])
{
	int n;
	printf("enetr no\n");
	scanf("%d",&n);

	recursiveReverseDigit(n);
	return 0;
}