// Write a function, which accepts an integer array and an integer as parameters and counts
// the occurrences of the number in the array.

#include <stdio.h>
int searchNumber(int *array,int number,int size)
{
	int count=0;
   for (int i = 0; i < size; ++i)
   {
   	   
   	   if(number==array[i])
   	   {
   	   	count++;
   	   }
   }
   printf("count is %d\n",count);
}
int main(int argc, char const *argv[])
{
	int n,number;
	printf("enter how many number\n");
	scanf("%d",&n);

	int array[n];
	for (int i = 0; i < n; ++i)
	{
		printf("enter %d th array element\n",i );
		scanf("%d",&array[i]);
	}

    printf("enter no to be searched\n");
    scanf("%d",&number);

     searchNumber(array,number,n);
	
	return 0;
}