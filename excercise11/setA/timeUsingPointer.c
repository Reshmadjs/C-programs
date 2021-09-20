// Write a function which takes hours, minutes and seconds as parameters and an integer s
// and increments the time by s seconds. Accept time and seconds in main and Display the new
// time in main using the above function.

#include <stdio.h>
int time(int *hours,int *minutes,int *sec,int *s)
{
	int result;
	 *sec=*sec+*s;
	do
	{
		if(*sec>=60)
		{   *sec=*sec-60;
			*minutes=*minutes+1;
		}
    }while(*sec>=60);
	do
	{
		if(*minutes>=60)
		{
			*minutes=*minutes-60;
			*hours=*hours+1;
		}
	}while(*minutes>=60);

result=printf("time is: %d:%d:%d\n",*hours,*minutes,*sec);
}
int main(int argc, char const *argv[])
{
	int h,m,sec,s;
	printf("enter the time in hh:mm:ss format\n");
	scanf("%d:%d:%d",&h,&m,&sec);
	printf("enter seconds \n");
	scanf("%d",&s);

	int newtime=time(&h,&m,&sec,&s);
	return 0;
}