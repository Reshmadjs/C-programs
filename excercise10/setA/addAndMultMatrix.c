// Write a program to add and multiply two matrices. Write separate functions to accept,
// display, add and multiply the matrices. Perform necessary checks before adding and multiplying
// the matrices.

#include <stdio.h>
void display(int rows,int cols,int matrix[rows][cols])
{

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
	       printf("%d\t",matrix[row][col]);
		}
		printf("\n");
	}
	
}

void add(int Arows,int Acols,int a[Arows][Acols],int b[Arows][Acols])
{
	int addition[Arows][Acols];
	for (int row= 0; row < Arows; row++)
	{
		for (int col = 0; col < Acols; col++)
		{
			addition[row][col]=a[row][col]+b[row][col];
		}
	}
        printf("addition of matrix is\n");
	    display(Arows,Acols,addition);


}

void mult(int Arows,int Acols,int Brows,int Bcols,int a[Arows][Acols],int b[Brows][Bcols])
{
  int mult[Arows][Bcols];
  for (int row = 0; row < Arows; row++)
   {
   	 for (int col = 0; col < Bcols; col++)
   	 {
   	 	  mult[row][col]=0;
   	 	for (int k = 0; k < Acols; k++)
   	 	{
   	 		mult[row][col]=mult[row][col]+a[row][k]*b[k][col];
   	 	}
   	 }
   }   printf("\nMultiplication of matrix is\n");
       display(Arows,Bcols,mult);
}

int main(int argc, char const *argv[])
{
	
   int Arows,Acols,Brows,Bcols,rows,cols;
	printf("enter how many rows and columns u want\n");
	scanf("%d%d%d%d",&Arows,&Acols,&Brows,&Bcols);

	int a[Arows][Acols],b[Brows][Bcols];

	for (int row = 0; row < Arows; row++)
	{
		for (int col = 0; col < Acols; col++)
		{
			printf("enetr A matrix element");
			scanf("%d",&a[row][col]);
		}
	}
   printf("=====================first A matrix==============\n");
	display(Arows,Acols,a);

	for (int row = 0; row < Brows; row++)
	{
		for (int col = 0; col < Bcols; col++)
		{
			printf("enetr B matrix element");
			scanf("%d",&b[row][col]);
		}
	}
       	printf("=====================second B matrix==============\n");
       	display(Brows,Bcols,b);	
        	if ((Arows == Brows) && (Acols == Bcols))
		  {
		    add(Arows,Acols,a,b);
		  }
		  else{
		    printf("\n Addition can not be possible");
		  }

		        

			   if (Acols == Brows)
			  {
			    mult(Arows,Acols,Brows,Bcols,a,b);
			  }
			  else{
			    printf("\n Multiplication can not be possible");
			      }
			  
				

       	
	return 0;
}