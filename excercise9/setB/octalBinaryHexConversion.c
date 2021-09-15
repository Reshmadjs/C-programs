// Write a program to accept a decimal number and convert it to binary, octal and hexadecimal.
// Write separate functions.

#include <stdio.h>
void display(int *array,int index)
{
	for (int i = index-1; i >= 0; --i)
	   {
	   	  printf("%d\n",array[i]);
	   }
}
void binary(int n)
{
	int b;
   int array[5],index=0;
   while(n>0)
   {
   	b=n%2;
   	array[index++]=b;
   	n=n/2;
   }
   display(array,index);
}

void hex(int n)
{
	printf("%x\n",n );
}
void octal(int n)
{
	printf("%o\n", n);
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter elemnent\n");
	scanf("%d",&n);
    binary(n);
	hex(n);
	octal(n);
	return 0;
}