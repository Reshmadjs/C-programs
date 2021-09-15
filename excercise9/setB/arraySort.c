// Write a program to accept n numbers from the user and store them in an array such that the
// elements are in the sorted order. Display the array. Write separate functions to accept and display
// the array. (Hint: Insert every number in its correct position in the array)
#include <stdio.h>
void accept()
{
	int n;
	printf("how many elements\n");
	scanf("%d",&n);

	int array[n],max,temp;
	max=array[0];
	for (int i = 0; i < n; ++i)
	{
		printf("enter array elmnt\n");
		scanf("%d",&array[i]);
	}
     for (int i = 0; i < n; ++i)
     {
     	for (int j = i+1; j<n; ++j)
     	{
     		if(array[i]<array[j])
     		{
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
     		}
     	}
     }
	display(array,n);
}
void display(int *array,int n)
{
  for (int i = 0; i < n; ++i)
  {
  	printf("%d\n",array[i]);
  }
}
int main(int argc, char const *argv[])
{
	
     accept();
	return 0;
}