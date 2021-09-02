// Write a program to accept three numbers and check whether the first is between the other
// two numbers.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a<c) || (a<b) && (a>c))
	{
       printf("%d is between the %d and %d",a,b,c);

	}
	
	   if((b>a) && (b<c) || (b<a) && (b>c))
	   {
         printf("%d is between the %d and %d",b,a,c);

	   }
    
    
	   if((c>a) && (c<b) || (c<a) && (c>b))
	   {
         printf("%d is between the %d and %d",c,a,b);

	   }
    
	return 0;
}