// Write a program to accept n numbers and store all prime numbers in an array called prime.
// Display this array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,primeIndex=0,factor=0;
	printf("how many numbers\n");
	scanf("%d",&n);

	int array[n],prime[n];
	for (int i = 0; i < n; ++i)
	{
		printf("enter element\n");
	    scanf("%d",&array[i]);
	}
	
	for (int i = 0; i<n; ++i)
	{   
		factor=0;
		for(int j=1;j<=i+1;j++)
		{
			if((array[i]%j)==0)
			{
				factor++;
			}
        
        }
        if(factor==2)
        {
        	prime[primeIndex++]=array[i];
        }
	}
   printf("prime numbers are:\n");
   for (int i = 0; i < primeIndex; ++i)
   {
   	   printf("%d\n", prime[i]);
   }
	return 0;
}