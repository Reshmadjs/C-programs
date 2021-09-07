// Accept two numbers in variables x and y from the user and perform the following operations
// Options
// 1. Equality
// 2. Less Than
// 3. Quotient and Remainder
// 4. Range
// 5. Swap
// Actions
// Check if x is equal to y
// Check if x is less than y
// Divide x by y and display the quotient and remainder
// Accept a number and check if it lies between x and y
// (both inclusive)
// Interchange x and y

#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int x,y,choice,n,temp;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);

    printf("1.Equality\n 2.Less than\n 3.Quotient and remainder\n 4.Range\n 5.Swap\n");
    do{
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1: if (x==y)
                   printf("%d and %d are equal\n",x,y);
                   else
                    printf("%d and %d are NOT equal\n",x,y);
                    break;

          case 2: if(x<y)
                printf("%d is less than %d",x,y);
                else
                    printf("%d is NOT less than %d",x,y);
                break;
        case 3: printf("quotient is %d\n",x/y);
                printf("remainder is %d\n",x%y);
                break;
        case 4:printf("enter number\n");
               scanf("%d",&n);
               if ((n>x) && (n<y) || (n<x) && (n>y))
               {
                   printf("%d is in between the %d and %d\n",n,x,y);
               }
               else
                printf("NOT between\n");
                 break;
         case 5:  temp=x;
                   x=y;
                   y=temp;
                   printf("after swapping x=%d and y=%d\n",x,y);
                   break;

        }

    }while(choice!=6);
    return 0;
}