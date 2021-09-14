// Write a program to accept n numbers in the range of 1 to 25 and count the frequency of
// occurrence of each number.

#include <stdio.h>
int chechIfNoAlredyPresent(int num,int *range2,int index)
{
	for (int i = 0; i < index; ++i)
	{
		if(range2[i]==num)
		{
			return 1;
		}
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int range[25],range2[25],index=0,count=0,i,n;

	printf("enter range\n");
	scanf("%d",&n);

	for (i = 0; i<n; ++i)
	{
	 	printf("enter range number\n");
	 	scanf("%d",&range[i]);
	}

	for (i = 0; i < n; ++i)
	{

		if(chechIfNoAlredyPresent(range[i],range2,index)==0)
		{
			printf("=====%d",range[i]);
		range2[index++]=range[i];
	
	    }
       //printf("%d\n",range2[index]);
	}
	for (int j = 0; j < index; ++j)
	{
		printf("entered values are :%d\n",range2[j]);
	}
	
     for (int j = 0; j < index; ++j)
     {
     	count=0;
       for (int i = 0; i<n; ++i)	
     	{
     		if(range2[j]==range[i])
     		{
     			count++;
     		}
     	}
     	printf("%d is present %d times\n",range2[j],count);
     }

	return 0;
}