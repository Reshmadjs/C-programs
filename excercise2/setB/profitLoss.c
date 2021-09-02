// Accept the cost price and selling price from the keyboard. Find out if the seller has made a
// profit or loss and display how much profit or loss has been made.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	float cp,sp,profit,loss;
	printf("enter cost price and selling price\n");
	scanf("%f%f",&cp,&sp);
	if (cp<sp)
	{
		printf("seller has made profit\n");
        profit=sp-cp;
        printf("profit is %f\n",profit);
	}
	else
	{
		printf("seller is in loss\n");
		loss=cp-sp;
		printf("loss=%f\n", loss);
	}
	return 0;
}