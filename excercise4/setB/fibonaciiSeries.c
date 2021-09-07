//Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……)
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,a=0,b=1,prev,next,sum,total;
	printf("enter no\n");
	scanf("%d",&n);
    sum=a+b;
    printf("%d\n",b);
    printf("%d\n",sum);
     prev=b;
     next=sum;
    for (int i = 2; i < n; ++i)
    {
    	total=prev+next;
    	printf("%d\n",total);
    	prev=next;
        next=total;

    }

	return 0;
}

