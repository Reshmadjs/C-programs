// Write a function to sort an array of n integers using Bubble sort method. Accept n numbers
// from the user, store them in an array and sort them using this function. Display the sorted array.
#include <stdio.h>
void bubbleSort(int *array,int n)
{
	int temp;
  for (int pass = 0; pass < n-1; pass++)
  {
  	for (int i = 0; i < n-1; ++i)
  	{
  		
  		if(array[i]>array[i+1])
  		{
  			temp=array[i+1];
  			array[i+1]=array[i];
  			array[i]=temp;
  		}
  	}
  }
printf("===========after sort============\n");
  for (int i = 0; i < n; ++i)
  {

  	printf("%d\n",array[i]);
  }
}
int main(int argc, char const *argv[])
{
	int n;
	printf("how many element\n");
	scanf("%d",&n);
	int array[n];

	for (int i = 0; i < n; i++)
	{
		printf("enter array element\n");
		scanf("%d",&array[i]);
	}

	bubbleSort(array,n);
	return 0;
}