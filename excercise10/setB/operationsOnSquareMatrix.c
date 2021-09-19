// Write a menu driven program to perform the following operations on a square matrix. Write
// separate functions for each option.
// i)Check if the matrix is symmetric.
// ii) Display the trace of the matrix (sum of diagonal elements).
// iii)Check if the matrix is an upper triangular matrix.

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
int symmetric(int rows,int cols,int matrix[rows][cols])
{
	int result=0;
	printf("entered matrix is:\n");
	display(rows,cols,matrix);
	int transpose[rows][cols];
  for (int row = 0; row< rows; row++)
  {
  	for (int col = 0; col < rows; col++)
  	{
  		transpose[col][row]=matrix[row][col];
  	}
  }
  printf("=============transpose=================\n");
  display(rows,cols,transpose);
  
for (int row = 0; row < rows; row++)
{
	for (int col = 0; col < cols; col++)
	{
        if(matrix[row][col]!=transpose[row][col])
		{
			result=1;
		}
	}
}
     if(result==0)
     {
     	printf("matrix is transposed matrix\n");
     }
     else
     {
     	printf("matrix is not transposed matrix\n");
     }
  
}
int trace(int rows,int cols,int matrix1[rows][cols])
{
	int sum=0;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			if(row==col)
			{
				sum=sum+matrix1[row][col];
			}
		}
	}
	printf("trace of matrix is %d\n",sum);

}
void upperTrianularMatrix(int rows,int cols,int matrix2[rows][cols])
{
	int ans=0;
  for (int row = 1; row< rows; row++)
  {
  	for (int col = 0; col<row; col++)
  	{
  		if(matrix2[row][col]!=0)
  		{
            ans=1;
            break;
  		}
  	}
  }
  if(ans==0)
  {
  	printf("matrix is upper Trianular Matrix\n");
  }
  else
  {
  	printf("matrix is not upper triangular matrix\n");
  }

}
int main(int argc, char const *argv[])
{
	int rows,cols,choice;
	printf("how many rows and columns want\n");
	scanf("%d%d",&rows,&cols);
    int matrix[rows][cols],matrix1[rows][cols],matrix2[rows][cols];
	if(rows==cols)
	{
		do{
			printf("i)Check if the matrix is symmetric.\n ii) Display the trace of the matrix (sum of diagonal elements).\n iii)Check if the matrix is an upper triangular matrix.\n");
            printf("enter choice\n");
            scanf("%d",&choice);
            switch(choice)
            {
            	case 1:printf("enter matrix\n");

		            	for (int row = 0; row < rows; row++)
		            	{
		            		for (int col = 0; col < cols; col++)
		            		{
		            			printf("enter matrix element\n");
		            			scanf("%d",&matrix[row][col]);
		            		}
		            	}
            	       
                        symmetric(rows,cols,matrix);
            	break;
            	case 2:printf("enter matrix\n");

		            	for (int row = 0; row < rows; row++)
		            	{
		            		for (int col = 0; col < cols; col++)
		            		{
		            			printf("enter matrix element\n");
		            			scanf("%d",&matrix1[row][col]);
		            		}
		            	}
                           printf("entered matrix is:\n");
                           display(rows,cols,matrix1);
                           trace(rows,cols,matrix1);
            	break;
            	case 3:printf("enter matrix\n");

		            	for (int row = 0; row < rows; row++)
		            	{
		            		for (int col = 0; col < cols; col++)
		            		{
		            			printf("enter matrix element\n");
		            			scanf("%d",&matrix2[row][col]);
		            		}
		            	}
                           printf("entered matrix is:\n");
                           display(rows,cols,matrix2);
                           upperTrianularMatrix(rows,cols,matrix2);

            	break;
            	case 4:break;
            }
		}while(choice!=4);
		

	}
	return 0;
}