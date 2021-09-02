// Accept the x and y coordinate of a point and find the quadrant in which the point lies.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,y;
	printf("enter x and y coordinate of a point\n");
	scanf("%d%d",&x,&y);
	if((x>0) && (y>0))
		printf("point is in first quadrant\n");
	else
		if ((x<0) && (y>0))
		{
			printf("point is in second quadrant\n");
		}
		else
			if ((x<0) && (y<0))
			{
				printf("pointis in third quadrant\n");
			}
			else
				printf("point is in fourth quadrant\n");
	return 0;
}	
