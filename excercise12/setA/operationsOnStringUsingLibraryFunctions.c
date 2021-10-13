// Write a menu driven program to perform the following operations on strings using standard
// library functions:
// Length
// Copy
// Concatenation
// Compare
// Reverse
// Uppercase
// Lowercase
// Check case

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main(int argc, char const *argv[])
{
	int choice,i=0,j=0,result=0,result1=0,k=0;
	char str1[20],str2[20],str3[20],ch;
	printf("enter string\n");
	scanf("%s",str1);
	printf("enter another string\n");
	scanf("%s",str2);
	do
	{
		printf("1.length\n 2.Concatenation\n 3.Copy\n 4.Compare\n 5.Reverse\n 6.Uppercase\n 7.Lowercase\n 8.Check case\n");
	    printf("enter choice\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:printf("length of first string is %ld\n",strlen(str1));
                    
	    	        break;
	    	case 2:printf("concatenetion of two strings is %s\n",strcat(str1,str2));

	    	        break;
	    	case 3:
	    	       printf("copied string is %s\n",strcpy(str3,str2));
   
	    	        break;
	    	case 4:if(strcmp(str1,str2)==0)
			    	{
			    		printf("strings are equal\n");
			    	}
			    	else
			    	{
			    		printf("strings are not equal\n");
			    	}

	    	        break;
	    	case 5:printf("reverse of %s is %s\n",str2,strrev(str2));

	    	        break;
	    	case 6:while(str1[i])
				   {
                     ch=str1[i];
                     putchar(toupper(ch));
                     i++;
				   }

	    	       
	    	        break;
	    	case 7:while(str2[j])
				   {
                     ch=str2[j];
                     putchar(tolower(ch));
                     j++;
				   }
	    	        break;
	    	case 8:while(str1[k])
	    	{
	    		ch=str1[k];
	    		if(islower(ch))
	    		{
	    	        result=1;
	    	     }
                  k++;
	    	}
	    	if(result==0)
	    	{
	    		printf("%s is in Uppercase\n",str1);
	    	}
	    	else
	    		printf("%s is in Lowercase\n",str1);
	    	
	    	        break;
	    	case 9:break;

	    }
	}while(choice!=9);
	return 0;
}