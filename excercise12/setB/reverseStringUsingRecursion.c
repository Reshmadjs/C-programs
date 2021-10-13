// Write a function which displays a string in the reverse order. (Use recursion)

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void reverse(char *string1,int size)
{ 
	if(size>=0)
	{
		printf("%c",string1[size]);
	reverse(string1,size-1);
	}

	
}
int main(int argc, char const *argv[])
{
	char string1[30];
	printf("enter string\n");
	scanf("%[^\n]",string1);

	reverse(string1,strlen(string1)-1);
	return 0;
}