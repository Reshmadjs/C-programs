// Write a recursive C function to calculate x . (Do not use standard library function)

#include <stdio.h>
int recursionPower(int x,int y)
{
	if(y==1 || x==1)
	{
		return x;
	}
	else
	return (x*recursionPower(x,y-1));

}                                                             
int main(int argc, char const *argv[])                         
{
	int x,y;                                                   
	printf("enter x and y value\n");
	scanf("%d%d",&x,&y);

	printf("ans=%d\n", recursionPower(x,y));
	return 0;
}