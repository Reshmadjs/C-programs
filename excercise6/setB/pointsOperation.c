// Accept x and y coordinates of two points and write a menu driven program to perform the
// following operations till the user selects Exit.
// i. Distance between points.
// ii. Slope of line between the points.
// iii. Check whether they lie in the same quadrant.
// iv. EXIT
// (Hint: Use formula m = (y2-y1)/(x2-x1) to calculate slope of line.)

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int x1,y1,x2,y2,choice,d;
	int slope;
	printf("Enter coordinates of first points\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter coordinates of second points\n");
	scanf("%d%d",&x2,&y2);

	printf("1. Distance between points.\n 2.Slope of line between the points.\n 3.iii. Check whether they lie in the same quadrant.\n 4.exit\n");
	do
	{
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
			       printf("distance between two points is %d\n",d);
			       break;
			case 2:slope=(y2-y1)/(x2-x1);
			        printf("slope of line is %d\n",slope);
			        break;
			 case 3: if(((x1>0) && (x2>0) && (y1>0) && (y2>0))|| ((x1<0) && (x1<0) && (y2>0) && (y2>0)) || ((x1<0) && (x2<0) && (y1<0) && (y2<0)) || ((x1>0) && (x2>0) && (y1<0) && (y2<0)))
			         {
			         printf("points are in same quadrant\n");
			         }
			         else
			         {
			         	printf("points are in different quadrant\n");
			         }
			         break;
			 case 4:break;        
		} 
	}while(choice!=4);
	return 0;
}