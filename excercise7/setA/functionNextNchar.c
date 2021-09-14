// Write a function, which accepts a character and integer n as parameter and displays the next
// n characters.

#include <stdio.h>
void nextChar(char ch,int n)
{ 
     for (int i = 0; i <= n; ++i)
     {
     	printf("%c\n",ch++);
     }
  
    
  
}
int main(int argc, char const *argv[])
{
	char ch;
	int n;
	printf("enter character\n");
	scanf("%c",&ch);
	printf("enter number\n");
	scanf("%d",&n);
    
    nextChar(ch,n);

	return 0;
}