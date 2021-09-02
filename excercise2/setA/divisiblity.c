//Write a program to accept a number and check if it is divisible by 5 and 7.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if((num%5)==0 && (num%7)==0)
	{
		printf("number is divisible by 5 and 7\n");
	}
	else
	{
		printf("number is NOT divisible by 5 and 7\n");
	}
	return 0;
}