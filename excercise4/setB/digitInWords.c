// Write a program, which accepts a number n and displays each digit in words. Example: 6702
// Output = Six-Seven-Zero-Two. (Hint: Reverse the number and use a switch statement)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,rem = 0;
	printf("enter number\n");
	scanf("%d",&n);
	do{
     rem=(rem*10)+n%10;
	 n=n/10;
 	}while( n!=0);
 	printf("%d",rem);

 	n = rem;
	do{
		rem=n%10;
	 	n=n/10;
		switch(rem)
		{
	      case 0:printf("ZERO\n");
	             break;
	      case 1:printf("ONE\n");break;
	      case 2:printf("TWO\n");break;
	      case 3:printf("THREE\n");break;
	      case 4:printf("FOUR\n");break;
	      case 5:printf("FIVE\n");break;
	      case 6:printf("SIX\n");break;
	      case 7:printf("SEVEN\n");break;
	      case 8:printf("EIGHT\n");break;
	      case 9:printf("NINE\n");break;
		}
    } while(n!=0);
	return 0;
}