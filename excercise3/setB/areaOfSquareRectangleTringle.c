// Write a program having a menu with the following options and corresponding actions
// Options
// 1. Area of square
// 2. Area of Rectangle
// 3. Area of triangle
// Actions
// Accept length ,Compute area of square and print
// Accept length and breadth, Compute area of rectangle
// and print
// Accept base and height , Compute area of triangle and
// print


#include <stdio.h>
int main(int argc, char const *argv[])
{
	int squareLength,rectangleLength,breadth,base,height,choice,squareArea,areaTriangle,areaRectangle;
	
	printf("1.area of square\n 2.area of rectangle\n 3.area of triangle\n");
	do
	{
		printf("enter choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:  printf("enter length of square\n");
			         scanf("%d",&squareLength);
			         squareArea=squareLength*squareLength;
			         printf("Area of square is %d\n",squareArea);
			         break;
			case 2: printf("enter length and breadth\n");
			      	scanf("%d%d",&rectangleLength,&breadth);
			        areaRectangle=rectangleLength*breadth;   
			        printf("Area of rectangle is %d\n",areaRectangle);
			        break;
			case 3: printf("enter base and height\n");
			        scanf("%d%d",&base,&height);
			        areaTriangle=(base*height)/2;  
			        printf("Area of triangle is %d\n",areaTriangle );    
			        break;
			case 4: break;                
		} 
	}while(choice!=4);
	return 0;
}