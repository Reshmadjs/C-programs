// Accept a character as input and check whether the character is a digit.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);

	if((ch>=48) && (ch<=57))
	{
		printf("chracter is digit\n");
	}
	else
	{
		printf("character is not digit\n");
	}
	return 0;
}