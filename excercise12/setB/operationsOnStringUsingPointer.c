// Write a menu driven program which performs the following operations on strings. Write a
// separate function for each option. Use pointers
// i. Check if one string is a substring of another.
// ii. Count number of occurrences of a character in the string.
// iii. Replace all occurrences of a character by another

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int findInitial(char *string1,char str)
{
    int j;
    for (int i = 0;i < strlen(string1); i++)
    {
        if(string1[i]==str)
        {
            return i;
        }
    }
    //return 0;
}
int substring(char *string1,char *substr)
{
    int j,flag=0;
    int initialValue=findInitial(string1,substr[0]);
    if (initialValue < 0)
  {
    return 0;
  }


    for (int i = initialValue,j=0; i < strlen(string1),j<strlen(substr); i++,j++)
    {
        if(string1[i]!=substr[j])
        {
          flag=1;
        }
    }
    if(flag==0)
    {
        printf("%s is substring of %s\n",substr,string1);
    }
    else
        printf("%s is NOT substring of %s\n",substr,string1);
    
   
}

void countOccurences(char *string1,char str1)
{
    int count=0;
    for (int i = 0; i < strlen(string1); i++)
    {
        if(str1==string1[i])
        {    
            count++;
        }
    }
    printf("count of %c is %d times\n",str1,count);
}

void replaceOccurencesByAnother(char *string1,char str2,char str3)
{
    printf("function called\n");

    for (int i = 0; i < strlen(string1); i++)
    {
        printf("function called in loop\n");

        if(string1[i]==str2)
        {
            printf("%c\n",str3);
    
            string1[i]=str3;
            
        }
    }
      printf("%s\n",string1);
}
int main(int argc, char const *argv[])
{
    char string1[30],substr[20],ch,ch2,ch3;
    printf("enter string\n");
    scanf("%[^\n]",string1);
    getchar();
    int choice;
    do
    {
        printf("i.Check if one string is a substring of another.\n ii. Count number of occurrences of a character in the string.\n iii. Replace all occurrences of a character by another.\n iv.Exit.\n");

        printf("enter choice\n");
        scanf("%d",&choice);
        getchar();
        switch(choice)
        {
            case 1:printf("enter substring\n");
                   scanf("%s",substr);
                   getchar();
                   substring(string1,substr);
                   break;
            case 2:printf("enter character to count\n");
                   scanf("%c",&ch);
                   
                   countOccurences(string1,ch);

                   break;
            case 3: 
                    printf("enter character to replace\n");
                    scanf("%c%c",&ch2,&ch3);
                    replaceOccurencesByAnother(string1,ch2,ch3);
                    break;
            case 4:break;
        }
    }while(choice!=4);
    return 0;
}


