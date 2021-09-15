// Write a program to remove all duplicate elements from an array.
#include <stdio.h>
int checkIfNoAlreadyPresent(int *array,int index,int number)
{
    for (int i = 0; i < index; ++i)
    {
        if(number==array[i])
        {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
	int n;
	printf("how many number\n");
	scanf("%d",&n);

	int array[n],array2[n],array2Index=0;
	for (int i = 0; i < n; ++i)
	{
		printf("enter array element\n");
		scanf("%d",&array[i]);
	}
	
	// for (int i = 0; i < n; ++i)
	// {
         
		     for (int j = 0; j < n; ++j)
		     {	
		     	// printf("2*********%d",checkIfNoAlreadyPresent(array2,array2Index,array[j]));
		     	// printf("3*********%d",checkIfNoAlreadyPresent(array2,array2Index,array[j]));
			    if(checkIfNoAlreadyPresent(array2,array2Index,array[j])==0)
			    {
				   array2[array2Index++]=array[j];
			    }  

		     }

	//}

	printf("==============================================\n");
	for (int i = 0; i < array2Index; i++)
	{
		printf("%d\n",array2[i]);
	}

	// printf("after removing duplicate\n");
	// for (int i = 0; i < n; ++i)
	// {
	// 	printf("%d\n",array[i] );
	// }
	return 0;
}