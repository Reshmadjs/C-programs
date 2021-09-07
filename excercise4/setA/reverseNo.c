// Write a program to accept an integer and reverse the number.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,rem;
	printf("enter number\n");
	scanf("%d",&n);

	do
	{
     rem=n%10;
     n=n/10;
     printf("%d",rem );  
	}while(n!=0);
	return 0;
}