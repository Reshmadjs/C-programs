// Write a program to accept an integer and check if it is prime or not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int number,factor=0;
	printf("enter number\n");
	scanf("%d",&number);
	
	for (int i = 1; i<=number; i++)
	{
		
	  if((number%i)==0)
	  {
	    factor++;	
	  }
    }
	  if (factor==2)
	{
		printf("%d is prime number\n",number );
	}
	return 0;
}