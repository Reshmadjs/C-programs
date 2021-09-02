// Accept any year as input through the keyboard. Write a program to check whether the year is
// a leap year or not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);

	if (((year%100)==0) && ((year%400)==0) || ((year%4)==0))
	{
		printf("year is leap year\n");
	}
	else
		printf("NOT leap year\n");
	return 0;
}