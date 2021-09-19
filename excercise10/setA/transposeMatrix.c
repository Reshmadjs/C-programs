// Write a program to accept a matrix A of size mXn and store its transpose in matrix B. Display
// matrix B. Write separate functions

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int rows,cols;
	printf("enter how many rows and columns u want\n");
	scanf("%d%d",&rows,&cols);

	int a[rows][cols],b[rows][cols];

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			printf("enetr matrix element");
			scanf("%d",&a[row][col]);
		}
	}
    for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
	       printf("%d\t",a[row][col]);
		}
		printf("\n");
	}
     printf("***************transpose of matrix is *********************\n");
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
	       printf("%d\t",a[col][row]);
		}
		printf("\n");
	}
	return 0;
}