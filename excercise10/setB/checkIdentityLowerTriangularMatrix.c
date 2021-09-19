// Write a menu driven program to perform the following operations on a square matrix. Write
// separate functions for each option.
// i)Check if the matrix is a lower triangular matrix.
// ii)Check if it is an identity matrix.

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
void lowerTriangular(int rows,int cols,int matrix1[rows][cols])
{
	int ans=0;
  for (int row = 0; row< rows-1; row++)
  {                                                     //0  1, 0  2
  	for (int col = 1; col>row && col<cols; col++)           //            1   2
  	{                                                    //i   j
  		if(matrix1[row][col]!=0)
  		{
            ans=1;
            break;
  		}
  	}
  }
  if(ans==0)
  {
  	printf("matrix is lower Triangular Matrix\n");
  }
  else
  {
  	printf("matrix is not lower triangular matrix\n");
  }

}
void identity(int rows,int cols,int matrix2[rows][cols])
{
	int identity=0;
   for (int row = 0; row < rows; ++row)
	{
		for (int col = 0; col < cols; ++col)
		{
			printf("%d%d\n",row,col );
			
			if((row==col) && (matrix2[row][col]!=1) || ((row!=col) && (matrix2[row][col]!=0)))
			{
                identity=1;
			
		    }
		}
		
	}
	if(identity==0)
	{
		printf("matrix is identity matrix\n");
	}
	else
	{
		printf("matrix is NOT identity matrix\n");
	}
	//int a=(identity==0) ? printf("matrix is identity matrix\n") : printf("matrix is not identity matrix\n");
}
int main(int argc, char const *argv[])
{
	int rows,cols,choice;
	printf("how many rows and columns want\n");
	scanf("%d%d",&rows,&cols);
    int matrix1[rows][cols],matrix2[rows][cols];
	if(rows==cols)
	{
		do{
			printf("i)Check if the matrix is a lower triangular matrix.\n ii)Check if it is an identity matrix.\n");
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
		            			scanf("%d",&matrix1[row][col]);
		            		}
		            	}
            	         display(rows,cols,matrix1);
                        lowerTriangular(rows,cols,matrix1);
            	break;
            	case 2:printf("enter matrix\n"); 

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
                           identity(rows,cols,matrix2);
            	break;
            	case 3:break;
            }
        }while(choice!=3);
    }
	return 0;
}