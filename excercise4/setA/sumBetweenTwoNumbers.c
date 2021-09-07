// Accept two integers x and y and calculate the sum of all integers between x and y (both
// inclusive)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,y,sum=0,i;
	printf("enter two numbers\n");
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
    {
      sum=sum+i;
    }

    printf("%d\n",sum );
	return 0;
}