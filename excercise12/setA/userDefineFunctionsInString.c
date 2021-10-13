// For the following standard functions, write corresponding user defined functions and write a
// menu driven program to use them. strcat, strcmp, strrev, strupr

#include <stdio.h>
#include<string.h>
#include <ctype.h>
void stringCat(char *string1,char *string2,int n)
{
	int j;
    for (int i = 0; i < strlen(string2); i++)
    {
         string1[n++]=string2[i];
    }	
    string1[n]='\0';
    printf("concatenation is:%s\n",string1);
}
int stringCmp(char *string1,char *string2)
{
  int j=0;
  for (int i = 0,j=0; i < strlen(string1),j<strlen(string2); i++,j++)
  {
  	if(string1[i]!=string2[j])
  	{ 
          return 1;
  	}
  }
  return 0;
}
void stringRev(char *string1)
{
	for (int i = strlen(string1)-1; i >= 0; i--)
	{
		printf("%c",string1[i]);
	}
	printf("\n");
}
void stringUpper(char *string1)
{
   for (int i = 0; i < strlen(string1); i++)
   {
   	  if(string1[i]>='a' && string1[i]<='z')
   	  {
   	  	string1[i]=string1[i]-32;

   	  }
   	  printf("%c",string1[i]);
   }
   printf("\n");
}
int main(int argc, char const *argv[])
{
	char string1[20],string2[20];
	int choice;

	printf("enter string1 and string2\n");
	scanf("%s%s",string1,string2);
	getchar();

	do{
		printf("1.strcat\n 2.strcmp\n 3.strrev\n 4.strupr\n 5.exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        	case 1:stringCat(string1,string2,strlen(string1));break;
        	 case 2:if(stringCmp(string1,string2)==0)
		        	 {
                        printf("strings are equal\n");

		        	 }
		        	 else
		        	 	printf("strings are not equal\n");break;
        	case 3:stringRev(string1);stringRev(string2);break;
        	 case 4:stringUpper(string1);stringUpper(string2);break;
        	 case 5:break;
        }
	}while(choice!=5);
	return 0;
}