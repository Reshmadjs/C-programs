//Accept a character from the user and display its ASCII value.
#include<stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	printf("%d",ch);
	return 0;
}