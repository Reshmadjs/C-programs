// Write a function which accepts a number and three flags as parameters. If the number is
// even, set the first flag to 1. If the number is prime, set the second flag to 1. If the number is
// divisible by 3 or 7, set the third flag to 1. In main, accept an integer and use this function to check
// if it is even, prime and divisible by 3 or 7. (Hint : pass the addresses of flags to the function)

#include<stdio.h>
int checkNo(int *number,int *flag1,int *flag2,int *flag3)
{
	int flag=0;
  if(*number%2==0)
  {
  	*flag1=1;
  }
   if((*number%7)==0 || (*number%3)==0)
  {
  	*flag2=1;
  }
  for (int i = 1; i <= *number; i++)
  {
  	if((*number%i)==0)
  	{
      flag++;
  	}
  }
  if(flag==2)
  {
  	*flag3=1;
  }

}
int main(int argc, char const *argv[])
{
	int number,flag1=0,flag2=0,flag3=0;

	printf("enter number\n");
	scanf("%d",&number);

   int result=checkNo(&number,&flag1,&flag2,&flag3);
	if(flag1==1)
	{
		printf("%d is even number\n",number);
	}
	 if(flag2==1)
	{
		printf("%d is divisible by 3 or 7 \n",number);
	}
	 if(flag3==1)
	{
		printf("%d is prime number\n",number);
	}
	
	return 0;
}