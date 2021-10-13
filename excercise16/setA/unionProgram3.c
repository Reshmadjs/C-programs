// accept details for n books and write a menu driven program
// for the following:
// Display all reference books
// Find the total number of reference books
// Display the edition of a specific reference book.

#include <stdio.h>
#include <string.h>
struct book
{
  int id;
  char title[20];
  char code[10];
	  union u
	  {   
	     	int edition;
	  }info;

	  union u1
	  {
	  	int no_of_copies;
	  }info1;

  int cost;	
};
void display(struct book book1[],int n)
{
	printf("all reference books are:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",book1[i].code);
		// printf("*******%ld\n",book1[i].info.edition);
		// printf("******2%d\n",book1[i].info1.no_of_copies);
	}
}
void totalRefBooks(struct book book1[],int n)
{
	int sum=0;
  printf("total reference books are:\n");
  for (int i = 0; i < n; i++)
  {
  	sum=sum+book1[i].info1.no_of_copies;
  }
  printf("%d\n",sum);
}

void editionOfRefBook(struct book book1[],int n,char *refBook)
{  

	printf("Edition\t Referance book\n");
  for (int i = 0; i < n; i++)
  {

  	if(strcmp(book1[i].code,refBook)==0)
  	{
  	
  		printf("%d\t %s\t\n",book1[i].info.edition,refBook);
  	}
  }
}
int main(int argc, char const *argv[])
{
	int n,choice;
	char refBook[10];
	
	printf("how many books \n");
	scanf("%d",&n);

	struct book book1[n];


	printf("enter book details like:\n");
	printf("id\t title\t code\t cost\t edition\t  no_of_copies\t\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s %s %d %d %d",
			&book1[i].id, 
			book1[i].title, 
			book1[i].code, 
			&book1[i].cost, 
			&book1[i].info.edition,
			&book1[i].info1.no_of_copies);

		// printf("edition: %f\n", book1[i].info.edition);
		// scanf("%d", &book1[i].info.no_of_copies);
		// printf("no_of_copies: %d\n", book1[i].info1.no_of_copies);

	}
    do
    {
    	printf("1.Display all reference books\n 2.Find the total number of reference books\n 3.Display the edition of a specific reference book.\n");
    	printf("enter choice\n");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:display(book1,n);break;
    	    case 2:totalRefBooks(book1,n);
                   break;
    	    case 3:
                 printf("enter ref book u wish to verify edition\n");
                 scanf("%s",refBook);
    	           editionOfRefBook(book1,n,refBook);break;
    		 case 4:break;
    	}
    }while(choice!=4);

	return 0;
}