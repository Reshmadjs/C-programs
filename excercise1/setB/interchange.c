// Accept two integers from the user and interchange them. Display the interchanged numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,temp;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("before interchanging:a=%d\t b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after interchanging:a=%d\t b=%d\n",a,b);
	return 0;
}