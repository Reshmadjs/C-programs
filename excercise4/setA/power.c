//Write a program to accept two integers x and n and compute x^n

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,n,i,power=1;
	printf("enter x and n value\n");
	scanf("%d%d",&x,&n);
    for ( i = 0; i < n; i++)
    {
    	power=power*x;
    }

    printf("%d\n",power);
	return 0;
}