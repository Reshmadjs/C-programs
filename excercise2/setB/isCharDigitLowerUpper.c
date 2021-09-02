// Write a program to check whether given character is a digit or a character in lowercase or
// uppercase alphabet. (Hint ASCII value of digit is between 48 to 58 and Lowercase characters
// have ASCII values in the range of 97 to122, uppercase is between 65 and 90)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);

	if((ch>=48) && (ch<=58))
	{
		printf("character is digit\n");
	}
	 else if ((ch>=97) && (ch<=122))
	 {
	 	printf("character is in lowercase\n");
	 }
	 else if ((ch>=65) && (ch<=90))
	 {
	 	printf("character is in uppercase\n");
	 }
	return 0;
}