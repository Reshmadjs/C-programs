// Accept two complex numbers from the user (real part, imaginary part). Write a menu driven
// program to perform the following operations till the user selects Exit.
// i. ADD
// ii. SUBTRACT
// iii. MULTIPLY
// iv. EXIT

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int areal,aimg,breal,bimg,cimg,creal,choice;
	printf("enter fisrt complex no\n");
	scanf("%d%d",&areal,&aimg);

	printf("enter second complex no\n");
	scanf("%d%d",&breal,&bimg);

   printf("1.add\n 2.subtract\n 3.multiply\n 4.exit\n");
   do
   {
   	printf("enter choice\n");
   	scanf("%d",&choice);
   	switch(choice)
   	{
   		case 1:creal=areal+breal;
   		        cimg=aimg+bimg;
   		        printf("%d+%di\n",creal,cimg);
   		        break;
   		case 2:creal=areal-breal;
   		        cimg=aimg-bimg;
   		        printf("%d+%di\n",creal,cimg);
   		        break;
	    case 3:creal = areal*breal - aimg*bimg;
	           cimg = aimg*breal + areal*bimg;
	           printf("%d+%di\n",creal,cimg);
   		        break;
   		case 4:break;
   	}
   }while(choice!=4);
	return 0;
}