// Write a function that accepts a character as parameter and returns 1 if it is an alphabet, 2 if it
// is a digit and 3 if it is a special symbol. In main, accept characters till the user enters EOF and use
// the function to count the total number of alphabets, digits and special symbols entered.

#include <stdio.h>
int funcChar(char ch)
{
	// int count=0,digit=0,spcl=0;
	
			if(((ch>=97) && (ch<=122)) || ((ch>=65) && (ch<=90)))
			{
				return 1;
				//count++;
			}
			else if((ch>=48) && (ch<=57))
			{
				return 2;
				//digit++;
			}
			else if(((ch>=32) && (ch<=47))||((ch>=128) && (ch<=253))||((ch>=58) && (ch<=64))||((ch>=91) && (ch<=96)))
			{
				return 3;
				//spcl++;
			}
    

	
}
int main(int argc, char const *argv[])
{
	char ch;
	int count=1,digit=0,spcl=0;
	printf("enter character\n");
	scanf("%c",&ch);
	do
   {
	   ch=getchar();
	   if((funcChar(ch))==1)
	   {
	   	count++;
	   }
	   else if((funcChar(ch))==2)
	   {
	   	digit++;
	   }
	   else if((funcChar(ch))==3)
	   {
	   	spcl++;
	   }
	}while(ch!=EOF);
   printf("alpha=%d\n digit=%d\n specialSymbol=%d\n",count,digit,spcl);
	return 0;
}