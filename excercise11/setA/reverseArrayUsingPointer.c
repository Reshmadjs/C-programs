// Write a program to display the elements of an array containing n integers in the reverse
// order using a pointer to the array

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n,*p,i;
	printf("enter how many elements you want\n");
	scanf("%d",&n);

	p=(int *)malloc(n*sizeof(int));
	printf("enter array elements");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",(p+i));
	}

	printf("entered array is:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",*(p+i));
	}

     printf("array in reverse order is:\n");
     for (int i = n-1; i >= 0; i--)
     {
     	printf("%d\n",*(p+i));
     }
	
	return 0;
}