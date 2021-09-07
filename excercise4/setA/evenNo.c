//Write a program to accept an integer n and display all even numbers upto n

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,n;
	printf("enter number\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
      if(i%2==0)
      {
      	printf("%d\t",i);
      }

	}
	return 0;
}