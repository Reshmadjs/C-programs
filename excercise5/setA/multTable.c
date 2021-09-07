// Write a program to display multiplication tables from ___ to ___ having n multiples each. The
// output should be displayed in a tabular format. For example, the multiplication tables of 2 to 9
// having 10 multiples each is shown below.
// 2 × 1 = 2
// 2 × 2 = 4
// ………….
// 2 × 10 = 20
// 3 × 1 = 3 ………….9 × 1 = 9
// 3 × 2 = 6…………..9 × 2 = 18
// ………….
// 3 × 10 = 30………..9 × 10 = 90

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,ans,n;
	printf("enter To to From table no and how many multiples\n");
	scanf("%d%d%d",&a,&b,&n);
  
   for (int i = a; i<=b; ++i)
   {
   	  printf("\n");
   	 for (int j = 1; j<=n; ++j)
   	 {
         ans=i*j;
         
   	 	printf("%d*%d=%d\n",i,j,ans );
   	 }
   	 printf("\t");
   }

	return 0;
}