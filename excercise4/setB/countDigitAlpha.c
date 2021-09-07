// Write a program to accept characters till the user enters EOF and count number of alphabets
// and digits entered.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char ch;
	int digit=0,alpha=0;
	printf("enter character\n");
	while(((ch=getchar())!=EOF))
    
{

	if(ch>=48 && ch<=57)
	{
		digit++;
	}
	else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		alpha++;
	}
}


	printf("\ndigits=%d\n alphabates=%d\n",digit,alpha );
    
	return 0;
}
