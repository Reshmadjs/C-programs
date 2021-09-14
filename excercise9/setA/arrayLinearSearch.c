// Write a function for Linear Search, which accepts an array of n elements and a key as
// parameters and returns the position of key in the array and -1 if the key is not found. Accept n
// numbers from the user, store them in an array. Accept the key to be searched and search it using
// this function. Display appropriate messages.

#include <stdio.h>
int linearSearch(int *array,int key,int size)
{
   for (int i = 0; i < size; ++i)
   {
   	  if(key==array[i])
   	  {
   	  	
   	  	return i;
   	  }
   }
   return -1;
}
int main(int argc, char const *argv[])
{
	int n,key;
    printf("enter how many element\n");
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; ++i)
    {
    	printf("enter array element\n");
    	scanf("%d",&array[i]);
    }

    printf("enter key to be serached\n");
    scanf("%d",&key);
    
    if(linearSearch(array,key,n)==-1)
    {
    	printf("%d not found alert\n",key );
    }
    else
    {
    	printf("position:%d\n",linearSearch(array,key,n));
    }
	return 0;
}