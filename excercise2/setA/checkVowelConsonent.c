// Accept a lowercase character from the user and check whether the character is a vowel or
// consonant.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	if((ch>='a') && (ch<='z'))
	{
	  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	  {
		printf("entered character is vowel\n");
	  }
	  else 
	  {
		printf("entered character is consonent\n");
	  }

	}

	else
		  printf("entered character is nor vowel neither consonent\n");

   
	return 0;
}