// Write a program in C to reverse each word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	char string1[30];
	printf("enter string\n");
	scanf("%[^\n]",string1);

	for (int i = strlen(string1)-1; i >=0; i--)
	{
		printf("%c", string1[i]);
	}
	return 0;
}