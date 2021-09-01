//Accept a character from the keyboard and display its previous and next character in order.
#include<stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	printf("next of %c is %c\n",ch,ch+1);
	printf("prev of %c is %c\n",ch,ch-1);
	return 0;
}