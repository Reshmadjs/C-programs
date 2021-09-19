#include<stdio.h>
void printMatrix(int array[][5],int rows,int columns)
{
int i,j;
for(i=0;i<rows;i++)
{
  for(j=0;j<columns;j++)
  {
    printf("%d\t",array[i][j]);
  }
   printf("\n");
}
}

int main()
{
int i,j,matrix[5][5],rows,columns,sum1=0,sum2=0,sum=0;
printf("how many rows and columns\n");
scanf("%d%d",&rows,&columns);

printf("enter matrix element");
for(i=0;i<rows;i++)
{
  for(j=0;j<columns;j++)
  {
    scanf("%d",&matrix[i][j]);
  }
}
printf("entered matrix is:\n");
printMatrix(matrix,rows,columns);
int finalSum = 0;
for(i=0;i<rows;i++)
{ 
  sum1=0;
  for(j=0;j<columns;j++)
  {
     sum1+=matrix[i][j];   
  }
  matrix[i][j]=sum1;
}
for(i=0;i<columns;i++)
{ 
   sum=0;
  for(j=0;j<rows;j++)
  {
     sum+=matrix[j][i];
  }
  finalSum+=sum;
  matrix[j][i]=sum;
}

matrix[rows][columns] = finalSum;

printf("=============================================================\n");
for(i=0;i<rows+1;i++)
{
  for(j=0;j<columns+1;j++)
  {
    printf("%d\t",matrix[i][j]);
  }
   printf("\n");
}



return 0;
}