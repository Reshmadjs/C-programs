// A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to be
// withdrawn from the user and print the total number of currency notes of each denomination the
// cashier will have to give.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int amount;
	printf("enter amount\n");
	scanf("%d",&amount);
	printf("currency notes of denomination of 10 is %d\n",amount/10);
	printf("currency notes of denomination of 5 is %d\n",(amount%10)/5);
	printf("currency notes of denomination of 1 is %d\n",((amount%10)%5)/1);	
	return 0;
}