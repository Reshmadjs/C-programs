// Write a function isEven, which accepts an integer as parameter and returns 1 if the number is
// even, and 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even
// or odd.

#include <stdio.h>
int isEven(int n)
{
	

	if((n%2)==0)
	{
        return 1;
	}
	else
	{
		return 0;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if((isEven(n))==1)
	{
		printf("%d is Even number\n",n);
	}
	else
	{
		printf("%d is odd number\n",n);
	}
	return 0;
}