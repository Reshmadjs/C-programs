// A palindrome is a string that reads the same-forward and reverse. Example: “madam” is a
// Palindrome. Write a function which accepts a string and returns 1 if the string is a palindrome and
// 0 otherwise. Use this function in main.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int palindrome(char *string1)
{
	char string2[20];
	int index=0,j;
	for (int i = strlen(string1)-1; i>=0; i--)
	{
	   string2[index++]=string1[i];	
	}
	string2[index]='\0';
	//printf(" string 2 is %s",string2);
	for (int i = 0,j=0; i < strlen(string1),j<strlen(string2);i++,j++)
	{
		if(string1[i]!=string2[j])
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	char string1[20];

	printf("enter string\n");
	scanf("%s",string1);
	getchar();

    if(palindrome(string1)==1)
    	{
    		printf("string is palindrome\n");
    	}
    	else
    		printf("string is not palindrome\n");

	return 0;
}