//Write a program to accept a character, an integer n and display the next n characters.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int n,count=1;
	printf("ente character and number\n");
	scanf("%c%d",&ch,&n);

	do
	{
		if(ch=='z')
		{
			ch='a';
		}
		else if (ch=='Z')
		{
			ch='A';
		}
		ch++;
		count++;
		printf("%c\n",ch);
	}while(count<=n);
	return 0;
}