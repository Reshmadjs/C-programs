// Write a function isPrime, which accepts an integer as parameter and returns 1 if the number
// is prime and 0 otherwise. Use this function in main to display the first 10 prime numbers.

#include <stdio.h>
int isPrime(int n)
{
	int count=0;
  for (int i = 1; i<=n; ++i)
  {
  	count=0;
  	if((n%i)==0)
  	{
       count++;
  	}
  }
  
  if(count==2)
  {
  	return 1;
  }
  else
  {
  	return 0;
  }
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	for (int i = 1; i<=n; ++i)
	{
		if((isPrime(i))==1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}