// Write a program to accept real number x and integer n and calculate the sum of first n terms
// of the series x+ 3x+5x+7x+…

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,n,sum=0,count=1,mult,i;
	printf("enter x and n values\n");
	scanf("%d%d",&x,&n);
     for(i=0;i<n;i++)
     {
     	mult=count*x;
     	count=count+2;
        sum=sum+mult;


     }
       printf("%d\n", sum);
	return 0;
}