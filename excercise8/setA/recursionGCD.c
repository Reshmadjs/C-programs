// Write a recursive C function to calculate the GCD of two numbers. Use this function in main.
// The GCD is calculated as :
// gcd(a,b) = a
// if b = 0
// = gcd (b, a mod b) otherwise

#include <stdio.h>
int gcd(int n1,int n2)
{
   if(n1==n2)
   {
   	return n1;
   }else if(n1==0)
   {
   	return n2;
   }else if(n2==0)
   {
   	return n1;
   }else if(n1>n2)
   {
   	return gcd(n1-n2,n2);
   }else 
   {
    return  gcd(n1,n2-n1);
   }
}
int main(int argc, char const *argv[])
{
	int n1,n2;
	printf("enter two no\n");
	scanf("%d%d",&n1,&n2);

	printf("gcd of two no is %d\n",gcd(n1,n2));
	return 0;
}