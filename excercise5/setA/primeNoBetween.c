// Write a program to display all prime numbers between ____ and ____.
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,factor=0;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);

	for (int i = a; i<=b; ++i)
	{
		factor=0;
		for (int j = 1; j<=i; ++j)
		{
			if ((i%j)==0)
			{
				factor++;
			}
		}
		if (factor==2)
		{
		   printf("%d\t", i);
		}
		
	}
	return 0;
}