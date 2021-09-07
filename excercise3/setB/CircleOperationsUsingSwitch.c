// Accept radius from the user and write a program having menu with the following options and
// corresponding actions
// Options
// 1. Area of Circle
// 2. Circumference of Circle
// 3. Volume of Sphere
// Actions
// Compute area of circle and print
// Compute Circumference of circle and print
// Compute Volume of Sphere and print

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int radius,choice,circleArea,circumference,volumeSphere;
	printf("enter radius\n");
	scanf("%d",&radius);

	printf("1.area of circle\n 2.circumference of circle\n 3.volume of sphere\n");
	do
	{
		printf("enter choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:  circleArea=3.14*radius*radius;
			         printf("Area of Circle is %d\n",circleArea);
			         break;
			case 2: circumference=2*3.14*radius;   
			        printf("circumference of Circle is %d\n",circumference);
			        break;
			case 3: volumeSphere=1.33*4*radius*radius*radius;  
			        printf("volume of sphere is %d\n",volumeSphere );    
			        break;
			case 4: break;                
		} 
	}while(choice!=4);
	return 0;
}