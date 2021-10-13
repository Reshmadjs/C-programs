// Write a program that will accept a string and character to search. The program will
// call a function, which will search for the occurrence position of the character in the
// string and return its position. Function should return –1 if the character is not found in
// the string.
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int occurenceCharacter(char *string1,char ch)
{
  for (int i = 0; i < strlen(string1); i++)
  {
  	if(string1[i]==ch)
  	{
  		return i;
  	}
  }
  return -1;

}
int main(int argc, char const *argv[])
{
	char string1[20],ch;
	int i,result;
	printf("enter string\n");
	scanf("%s",string1);
	getchar();

	printf("enter character to be search\n");
	scanf("%c",&ch);
	getchar();
     result=occurenceCharacter(string1,ch);
    if(result!=-1)
    {
    	printf("%c is found at positon %d\n",ch,result);
    }
    else
    	printf("%c is not found\n",ch);
	return 0;
}