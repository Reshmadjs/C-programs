// Write a program to allocate memory dynamically for n integers such that the memory is
// initialized to 0. Accept the data from the user and find the range of the data elements.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n,*p;
	printf("how many elements you want\n");
	scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));

    printf("enter array elements\n");
    for (int i = 0; i < n; i++)
    {
    	scanf("%d",p+i);
    }

    printf("entered array elements are:\n");
    for (int i = 0; i < n; i++)
    {
    	printf("%d\n",*(p+i));
    }

   int max=0,min=*p;
   for (int i = 0; i < n; i++)
   {
   	 if(*(p+i)<min)
   	 {
   	 	min=*(p+i);
   	 }

   	 if(*(p+i)>max)
   	 {
   	 	max=*(p+i);
   	 }
   }

   printf("range is: %d-%d\n",min,max);
    

	return 0;
}