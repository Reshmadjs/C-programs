// Write a program to accept an integer and count the number of digits in the number.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number,count=0;
	printf("enter number\n");
	scanf("%d",&number);
    
	do
	{
		number=number/10;
		count++;
	}
	while(number!=0);
	printf("Number of digits are %d\n", count);
	return 0;
}