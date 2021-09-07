// Write a program, which accepts two integers and an operator as a character (+ - * /),
// performs the corresponding operation and displays the result.

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,result1,result2,result3,result4;
	char ch;

	printf("enter two integers\n");
	scanf("%d%d",&a,&b);

	printf("1.+\n 2.-\n 3.*\n 4./\n 5.exit\n");
	do{
		getchar();
	printf("enter choice of an operator that u wish to perform on integers:\n");
	scanf("%c",&ch);
    
     switch(ch)
     {
       case '1' : result1=a+b;
               printf("result is:%d\n",result1);
               break;
       case '2' :result2=a-b;
              printf("result is:%d\n",result2);
              break;
       case '3' :result3=a*b;
              printf("result is:%d\n",result3);
              break;
       case '4' :result4=a/b;
              printf("result is:%d\n",result4);
              break;
       case '5':break;
     }
       }
       while(ch!='5');
	return 0;
}