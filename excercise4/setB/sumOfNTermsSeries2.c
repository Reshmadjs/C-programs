// Write a program to accept real number x and integer n and calculate the sum of first n terms
// of the series 1/x+2/x^2+3/x^3....

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,x,power=1;
	float sum=0;
	printf("Enter x and n values\n");
	scanf("%d%d",&x,&n);

	for (int i = 1; i <= n; i++)
	{
		 power=1;
		for (int j = 1; j <=i; j++)
		{
		    power=power*x;
		}

		sum=sum+(((float)i/power));
	}

	printf("%f\n",sum );
	return 0;
}
