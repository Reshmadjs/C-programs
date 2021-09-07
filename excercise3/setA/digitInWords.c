// Accept a single digit from the user and display it in words. For example, if digit entered is 9,
// display Nine.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int digit,choice;
		printf("1.\n 2.\n 3.\n 4.\n 5.\n 6.\n 7.\n 8.\n 9.\n");

	printf("enter single digit\n");
	scanf("%d",&digit);

		switch(digit)
	{
      case 1:printf("ONE\n"); break;
      case 2:printf("TWO\n");break;
      case 3:printf("THREE\n");break;
      case 4:printf("FOUR\n");break;
      case 5:printf("FIVE\n");break;
      case 6:printf("SIX\n");break;
      case 7:printf("SEVEN\n");break;
      case 8:printf("EIGHT\n");break;
      case 9:printf("NINE\n");break;
      default: printf("u have entered wrong choice\n");
    }
	return 0;
}