// Write a program to display all Armstrong numbers between 1 and 500. (An Armstrong
// number is a number such that the sum of cube of digits = number itself Ex. 153 = 1*1*1 + 5*5*5
// + 3*3*3

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,rem,quotient,power;
	printf("enter TO to FROM number\n");
	scanf("%d%d",&a,&b);

	for (int i = a; i<=b; i++)
	{
		int num = i,sum=0;	
		do
		{
		   rem=num%10;
		   num=num/10;
		   
	       power=rem*rem*rem;
	       sum=sum+power;
        }
       while(num!=0);
       	// printf("sum : %d\t",sum);

       if(sum==i)
       {
       	printf("%d\t",i);
       }
	}

	return 0;
}