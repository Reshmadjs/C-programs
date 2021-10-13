// Write a program that accepts n strings and displays the longest string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	char string[50][25],ch;
     int n,max=0,c;
	printf("hoe many strings u want");
	scanf("%d",&n);
     printf("enter strings\n");
	for (int i = 0; i < n; i++)
	{
	  scanf("%s",string[i]);
	}
    getchar();
	printf("entered string is \n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",string[i]);
	}

	for (int i = 0; i < n; i++)
	{   
		if(strlen(string[i])>max)
		{
			c=i;
			max=strlen(string[i]);
		}
	}
	printf("longest line is %s of %d characters\n",string[c],max);
	return 0;
}