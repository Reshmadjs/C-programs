//Accept the x and y coordinates of two points and compute the distance between the two
// points.

#include<stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int x1,x2,y1,y2,a,b,c,distance;
	printf("enter x1,x2,y1,y2\n");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    c=a+b;
    distance=sqrt(c);
    printf("distance between two points is %d",distance);
	return 0;
}