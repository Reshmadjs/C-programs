// Accept n integers in array A. Pass this array and two counter variables to a function which
// will set the first counter to the total number of even values in the array and the other to the total
// number of odd values. Display these counts in main. (Hint: Pass the addresses of the counters to
// the function)

#include <stdio.h>
#include <stdlib.h>
int counter(int *A,int *countEven,int *countOdd,int n)
{
	printf("******init*****%d\t %d\n",*countEven,*countOdd );
   for (int i = 0; i < n; i++)
   {		//printf("element: %d", A[i]);
   	  if(A[i]%2==0)
   	  {
   	  	//printf(" prev even***********%d\n",*countEven);
   	  	// *countEven = *countEven+1;
   	  	(*countEven)++;
   	  	//printf("even***********%d\n",*countEven);
   	  }
   	  else
   	  {
   	  	//printf("prev odd***********%d\n",*countOdd);
   	  	// *countOdd = *countOdd+1;
   	  	(*countOdd)++;
   	  	//printf("odd***********%d\n",*countOdd);
   	  }
   }

   printf("even count=%d and odd count=%d\n",*countEven,*countOdd);
}
int main(int argc, char const *argv[])
{
	int n,countEven=0,countOdd=0,i;
	
	printf("how many elements you want\n");
	scanf("%d",&n);
    int A[n];
   // A=(int *)malloc(n*sizeof(int));
	printf("enter array elements\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}

	printf("entered array elements are:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",A[i]);
	}

	int result=counter(A,&countEven,&countOdd,n);
	
	return 0;

}