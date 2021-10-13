// Write a program which accepts a sentence from the user and alters it as follows:
// Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	char string1[25];

	printf("enter string\n");
	scanf("%[^\n]",string1);
	getchar();

	for (int i = 0; i < strlen(string1); i++)
	{
		
             if(string1[i]>='A' && string1[i]<='Z')
         	{
			string1[i]=string1[i]+32;
           
		    }
            else  if(string1[i]>='a' && string1[i]<='z')
             {
             	string1[i]=string1[i]-32;
             }

	
             
         if(string1[i]==' ')
         {
         	string1[i]='*';
         }
    
         if(string1[i]>='0' && string1[i]<='9')
         {
         	string1[i]='?';
         }



	}
		printf("%s", string1);

	
     
	return 0;
}