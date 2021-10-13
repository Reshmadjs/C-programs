// Modify the sample program 1 to accept details for n books and write a menu driven program
// for the following:
// Display all magazines
// Display magazine details for specific month.
// Find the “costliest” magazine

#include <stdio.h>
#include <string.h>
struct book
{
  int id;
  char title[20];
  char code[10];
	  union u
	  {
	     char month[20];
	  }info;

  int cost;	
};
void display(struct book book1[],int n)
{
	printf("all magzines are:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",book1[i].code);
	}
}

void magzineDetail(struct book book1[],int n,char *month)
{
	int i;
	printf("details are:\n");
	printf("id\t title\t code\t month\t cost\t\n");
	for ( i = 0; i < n; i++)
	{
	
		if(strcmp(book1[i].info.month,month)==0)
		{
           printf("%d\t %s\t %s\t %d\t %s\t\n",book1[i].id,book1[i].title,book1[i].code,book1[i].cost,book1[i].info.month);
		}
	}
}

void costlierMagzine(struct book book1[],int n)
{
	int max=book1[0].cost,c=0;
   for (int i = 0; i < n; i++)
   {
   	 if(book1[i].cost>max)
   	 {
   	 	max=book1[i].cost;
   	 	c=i;
   	 }
   }
   printf("costlier magazine is:\n");
   printf("%s\t %d\t\n", book1[c].code,book1[c].cost);
}
int main(int argc, char const *argv[])
{
	struct book book1[20];
	int n,choice;
	char month[10];
	printf("how many books \n");
	scanf("%d",&n);
	printf("enter book details like:\n");
	printf("id\t title\t code\t cost\t month\t\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s %s %d %s",&book1[i].id,book1[i].title,book1[i].code,&book1[i].cost,book1[i].info.month);
	}
    do
    {
    	printf("1.Display all magazines\n 2.Display magazine details for specific month\n 3.Find the “costliest” magazine\n");
    	printf("enter choice\n");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:display(book1,n);break;
    	    case 2:
                   printf("enter the month\n");
                   scanf("%s",month);
    	           magzineDetail(book1,n,month);break;
    	    case 3:costlierMagzine(book1,n);break;
    		 case 4:break;
    	}
    }while(choice!=4);

	return 0;
}