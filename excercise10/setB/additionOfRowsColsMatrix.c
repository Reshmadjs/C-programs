// Write a program to accept an mXn matrix and display an m+1 X n+1 matrix such that the
// m+1 row contains the sum of all elements of corresponding row and the n+1 column contains
// the sum of elements of the corresponding column.

#include <stdio.h>
int display(int rows,int cols,int matrix[rows][cols])
{
	for (int row = 0; row < rows; ++row)
	{
		for (int col = 0; col < cols; ++col)
		{
			printf("%d\t",matrix[row][col]);
		}
		printf("\n");
	}

}
int main(int argc, char const *argv[])
{
	int rows,cols,sum1=0,sum2=0,row,col,finalSum=0;
	printf("how many row and column u want\n");
	scanf("%d%d",&rows,&cols);
   
   int matrix[rows+1][cols+1];
   printf("enter matrix element\n");
   for (row = 0; row < rows; row++)
   {
   	 for (col= 0; col < cols; col++)
   	 {
   	 	scanf("%d",&matrix[row][col]);
   	 }
   }

  display(rows,cols,matrix);
 
  for (row = 0; row < rows; row++)
  {
  	sum1=0;
  	for (col = 0; col < cols; col++)
  	{
  		sum1=sum1+matrix[row][col];

  	}
  	matrix[row][col]=sum1;
  	// printf("=============2 row: %d + col: %d = %d\n",row,col,matrix[row][col]);
  	//finalSum=finalSum+sum1;
  }
// display(rows,cols+1,matrix);
  //   for (row = 0; row < rows+1; row++)
  // {
  //  for (col = 0; col < cols+1; col++)
  //  {
  //  	 printf("%d\t", matrix[row][col]);
  //  }
  //  printf("\n");
  // }

 for (col = 0; col < cols; col++)
  {
  	sum2=0;
  	for (row = 0; row < rows; row++)
  	{
  		sum2=sum2+matrix[row][col];

  	}
  	printf("=============1 %d\n",sum2);
    finalSum+=sum2;
  	matrix[row][col]=sum2;
  	printf("=============2 row: %d + col: %d = %d\n",row,col,matrix[row][col]);
  	
  }
  // display(rows+1,cols+1,matrix);


   matrix[rows][cols]=finalSum;
// printf("*****************************************************************\n");
  for (row = 0; row < rows+1; row++)
  {
   for (col = 0; col < cols+1; col++)
   {
   	 printf("%d\t", matrix[row][col]);
   }
   printf("\n");
  }





	printf("=============1 %d\n",matrix[0][0]);
	printf("=============1 %d\n",matrix[0][1]);
	printf("=============1 %d\n",matrix[0][2]);
	printf("=============1 %d\n",matrix[1][0]);
	printf("=============1 %d\n",matrix[1][1]);
	printf("=============1 %d\n",matrix[1][2]);
   
	return 0;
}