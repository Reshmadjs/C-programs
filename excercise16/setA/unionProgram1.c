//accept details for n books and write a menu driven
// program for the following:
// Display all text books
// Search Text Book according to Title
// Find the total cost of all books (Hint: Use no_of_copies).

#include <stdio.h>
#include <string.h>
struct book
{
	int id;
	char title[20];
	union u
	{
		int no_of_copies;

	}info;
	int cost;
};

int main(int argc, char const *argv[])
{
	struct book book1[10];
	int n,choice,sum=0;
	char name[20];
	printf("how many books \n");
	scanf("%d",&n);
	printf("enter book details like\n");
	printf("id\t  title\t  cost\t  no of copies\t \n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s %d %d",&book1[i].id,book1[i].title,&book1[i].cost,&book1[i].info.no_of_copies); 
	}
	
     do{

			printf("1.Display all text books\n  2.Search Text Book according to Title\n  3.Find the total cost of all books\n 4.Exit\n");
			printf("enter choice\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:printf("all text books details are:\n");
				       printf("id\t  title\t  cost\t  no of copies\t \n");
                       for (int i = 0; i < n; i++)
                       {
                       	  printf("%d\t %s\t %d\t %d\t\n",book1[i].id,book1[i].title,book1[i].cost,book1[i].info.no_of_copies);
                       }
				       
                       break;
				case 2:printf("enter book name to search\n");
				       scanf("%s",name);
                       for (int i = 0; i < n; i++)
                       {
                       	  if(strcmp(book1[i].title,name)==0)
                       	  {
                            printf("match found:\n");
				            printf("id\t  title\t  cost\t  no of copies\t \n");
				            printf("%d\t %s\t %d\t %d\t\n",book1[i].id,book1[i].title,book1[i].cost,book1[i].info.no_of_copies);
                       	  }
                       	  
                       }

				       break;
				case 3:for (int i = 0; i < n; i++)
						{
						 sum=sum+(book1[i].cost*book1[i].info.no_of_copies);

						}
						printf("total cost of  all books is %d\n", sum);
				      
				       break;
				case 4:break;

			}
		}while(choice!=4);	
	return 0;
}