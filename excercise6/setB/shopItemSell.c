// Write a simple menu driven program for a shop, which sells the following items:
// The user selects items using a menu. For every item selected, ask the quantity. If the quantity of
// any item is more than 10, give a discount of _____%. When the user selects Exit, display the
// total amount.

#include <stdio.h>
float calculatePrice(int qty,int unitprice)
{
  
  	float discount=(0.1*(qty*unitprice));
  	float total=(float)(qty*unitprice);
    return ((qty>10) ? (total-discount) : total);
}
int main(int argc, char const *argv[])
{

	int laptop=32000,mouse=300,PC=25000,keyboard=5000,discount,choice,n;
    int laptop_qty=0,mouse_qty=0,pc_qty=0,keyboard_qty=0;

  float totalAmount = 0;

	printf("1.laptop\n 2.mouse\n 3.PC\n 4.keyboard\n 5.exit\n");

          do{ 

    
    
    printf("enter the choice\n");
    scanf("%d",&choice);

    switch(choice)
    {

      case 1:
          printf("enter quantity\n");    
          scanf("%d",&laptop_qty);

          totalAmount = totalAmount + calculatePrice(laptop_qty, laptop);
           //printf("total amount=%f",totalAmount);
          break;
         
      case 2:
          printf("enter quantity\n");    
          scanf("%d",&mouse_qty);
          totalAmount = totalAmount + calculatePrice(mouse_qty, mouse);
          break;
      case 3:
          printf("enter quantity\n");    
          scanf("%d",&pc_qty);
          totalAmount = totalAmount + calculatePrice(pc_qty, PC);
          break;
      case 4:
          printf("enter quantity\n");    
          scanf("%d",&keyboard_qty);
          totalAmount = totalAmount + calculatePrice(keyboard_qty, keyboard);
          break;
      case 5:break;
          
    }       
  }
   while(choice!=5);
    printf("total amount of items are %f",totalAmount);
 }
  
  

	