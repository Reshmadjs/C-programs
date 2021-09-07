// Display all perfect numbers below 500. [A perfect number is a number, such that the sum of
// its factors is equal to the number itself]. Example: 6 (1 + 2 + 3), 28 (1+2+4+7+14)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,sum=0;
	printf("enter no to to from\n");
	scanf("%d%d",&a,&b);

	for (int i = a; i<=b; i++)
	{
		sum=0;
		for (int j = 1; j<i; j++)
		{
			if((i%j)==0)
			{
		     
		   	  sum=sum+j;
		   	}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}