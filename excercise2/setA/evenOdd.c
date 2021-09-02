//Write a program to accept an integer and check if it is even or odd.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if((num%2)==0)
	{
		printf("number is even\n");
	}
	else
{
     printf("number is odd\n");

}
		return 0;
}