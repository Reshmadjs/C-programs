// Modify the sample program 1 to display n lines as follows (here n=4).
// A  	B	C 	D   
// E    F    G     
// H    I
// J

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int n;
	printf("enter character\n");
	scanf("%c",&ch);
	printf("enter no of lines\n");
	scanf("%d",&n);

	for (int i = 1; i<=n; i++)
	{
		for (int j = n; j>=i; j--)
		{
			printf("%c\t",ch++);
			//ch++;
		}
		printf("\n");
	}
	return 0;
}