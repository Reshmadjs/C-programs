// Write a program to find the union and intersection of the two sets of integers (store it in two
// arrays).
#include<stdio.h>
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
	int n1,n2;
	printf("how many element in array1 and array2 set\n");
	scanf("%d%d",&n1,&n2);

	int array1[n1],array2[n2],unions[n1],intersection[n1],unionIndex=0,intersectIndex=0;
    
    printf("enter element of first set\n");
     for (int i = 0; i < n1; ++i)
     {
     	printf("enter element \n");
     	scanf("%d",&array1[i]);
     }

     printf("enter element of second set\n");
     for (int i = 0; i < n2; ++i)
     {
     	printf("enter element \n");
     	scanf("%d",&array2[i]);
     }
      // ============union========================================================
     for (int i = 0; i < n1; ++i)
     {
     	unions[unionIndex++]=array1[i];
     }

     for (int i = 0; i < n2; ++i)
     {
        if(checkIfNoAlreadyPresent(unions,unionIndex,array2[i])==0)
        {
         unions[unionIndex++]=array2[i];
        }
     }
     printf("==========union is=========== \n");
      for (int i = 0; i < unionIndex; ++i)
      {
          printf("%d\n", unions[i]);
      }
     // ==========intersection===================================================

     for (int i = 0; i < n1; ++i)
     {
         for (int j = 0; j < n2; ++j)
         {
             if((array2[j]==array1[i]) && (checkIfNoAlreadyPresent(intersection,intersectIndex,array1[i])==0))
             {
                intersection[intersectIndex++]=array1[i];
             }
         }
     }

     printf("==========intersection is=========== \n");
      for (int i = 0; i < intersectIndex; ++i)
      {
          printf("%d\n", intersection[i]);
      }
	return 0;
}