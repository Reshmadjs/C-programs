// Write a program that accepts n words and outputs them in dictionary order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int n;
	char words[50][50],temp[50];
	printf("how amny words u want\n");
	scanf("%d",&n);

	printf("enter words\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s",words[i]);
	}
	getchar();

	printf("entered words are\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", words[i]);
	}

     for (int i = 0; i < n-1; i++)
     {
     	for (int j = i+1; j < n; j++)
     	{
     		if(strcmp(words[i],words[j])>0)
     		{
               strcpy(temp,words[i]);
               strcpy(words[i],words[j]);
               strcpy(words[j],temp);
     		}
     	}
     }

     printf("output is\n");
     for (int i = 0; i < n; i++)
     {
     	printf("%s\n",words[i]);
     }
	return 0;
}