// Accept the time as hour, minute and seconds and check whether the time is valid. (Hint:
// 0<=hour<24, 0<=minute <60, 0<=second <60)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int h,m,s;
	printf("enter hour:minute:seconds\n");
	scanf("%d:%d:%d",&h,&m,&s);

	if(((h>=0) && (h<=24)) && ((m>=0) && (m<60)) && ((s>=0) && (s<60)))
	{
		printf("time is valid\n");
	}
	else
		printf("time is not valid\n");
	return 0;
}