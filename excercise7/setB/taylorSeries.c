// Write a function power, which calculates x . Write another function, which calculates n! Using
// for loop. Use these functions to calculate the sum of first n terms of the Taylor series
#include <stdio.h>
int power(int x,int power)
{
	int result=1,i;
	for(i=1;i<=power;i++)
	{
      result*=x;
	}
      return result;
}
int fact(int y)
{
	int fact=1;
   for (int i = y; i>0;i--)
   {
   	 fact*=i;
   }
   return fact;
}
int main(int argc, char const *argv[])
{
	int n,count=1,x;
	printf("enter how many terms u want and x value\n");
	scanf("%d%d",&n,&x);
     float ans=0;
	for (int i =1; i<(n*2); i+=2)
	{
         if((count%2)!=0)
         {
           ans=ans+((float)power(x,i)/(float)fact(i));
         }
         else
         {
         	ans=ans-((float)power(x,i)/(float)fact(i));
         }
         count++;
		
	}
	printf("answer is %f\n", ans);
	return 0;
}