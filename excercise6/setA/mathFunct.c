// Write a menu driven program to perform the following operations till the user selects Exit.
// Accept appropriate data for each option. Use standard library functions from math.h
// i. Sine
// ii. Cosine
// iii. log
// iv. e^x
// v. Square Root
// vi. Exit
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float z,x,a,b,angle,result2,result3,x1,c,result4,result5,y;
	int choice;
	printf("1.sine\n 2.cosine\n 3.log\n 4.e^x\n 5.square root\n 6.exit\n");
	do
	{
		printf("enter choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:printf("enter value\n");
			       scanf("%f",&x);
			       z= sin(x)/x;
			       printf("%f\n",z);
			       break;
			case 2:printf("enter values  angle\n");
			       scanf("%f",&angle);
                   result2=cos(angle);
                   printf("%f\n",result2);
                   break;
			case 3:printf("enter value of x1\n");
			       scanf("%f",&x1);
			       result3=log(x1);
			       printf("%f\n",result3);
			       break;
			case 4:printf("enter value\n");
			       scanf("%f",&c);
			       result4=exp(c);
			       printf("%f\n",result4 );
			       break;
			case 5:printf("enter value\n");
			       scanf("%f",&y);
			       result5=sqrt(y);
			       printf("%f\n", result5);
			       break;
			case 6:break;
		}
	}while(choice!=6);
	return 0;
}