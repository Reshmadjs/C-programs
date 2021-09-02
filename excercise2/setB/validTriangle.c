// Accept three sides of triangle as input, and print whether the triangle is valid or not. (Hint:
// The triangle is valid if the sum of each of the two sides is greater than the third side).
#include <stdio.h>
int main(int argc, char const *argv[])
{
 int a,b,c;
 printf("enter three sides of triangle\n");
 scanf("%d%d%d",&a,&b,&c);

 if (((a+b)>c) && ((a+c)>b) && ((b+c)>a))
 {
  printf("triangle is valid\n");
 } 
 else
   printf("triangle is not valid\n");
 return 0;
}