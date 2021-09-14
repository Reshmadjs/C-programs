// Write a recursive function to calculate the nth Fibonacci number. Use this function in main to
// display the first n Fibonacci numbers. The recursive definition of nth Fibonacci number is as
// follows:
// fib(n) = 1
// if n = 1 or 2
// = fib(n-2) + fib(n-1)
// if n>2

#include <stdio.h>
void fibo(int n)
{
	static int first=0,second=1,dynamic;
	
   if(n>0)
   {
      dynamic=first+second;
      first=second;
      second=dynamic;
      printf("%d\t",dynamic);
       fibo(n-1);
   }
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	fibo(n);
	return 0;
}