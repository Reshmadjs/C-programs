// Write a program, which accepts a character from the user and checks if it is an alphabet, digit
// or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change
// the case.

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	char ch;

	printf("enter character\n");
	scanf("%c",&ch);

	if(isalpha(ch))
	{
		printf("%c is alphabet\n",ch );
		if(islower(ch))
		{
			ch=toupper(ch);
			printf("%c\n",ch );
		}
		else{
			ch=tolower(ch);
			printf("%c\n",ch );		}
	}

	else if(isdigit(ch))
	{
		printf("%c is digit\n",ch );
	}
  
    else if (ispunct(ch))
    {
    	printf("%c is a punctuation symbol\n",ch );
    }
	return 0;
}