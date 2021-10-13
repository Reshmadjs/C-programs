// Create a structure employee (id, name, salary). Accept details of n employees and write a
// menu driven program to perform the following operations. Write separate functions for the
// different options.
// i) Search by name
// ii) Search by id
// iii) Display all
// iv) Display all employees having salary > _____
// v) Display employee having maximum salary.

#include <stdio.h>
#include <string.h>
struct employee
{
  int id;
  char name[20];
  int salary;	
};
void searchByName(struct employee e[],int n);
void searchById(struct employee e[],int n);
void displayAll(struct employee e[],int n);
void salaryGT(struct employee e[],int n,int salary);
void maxSalary(struct employee e[],int n);
int main(int argc, char const *argv[])
{
	int choice,n,salary;
	struct employee e[20];
	printf("how many employees \n");
	scanf("%d",&n);

    printf("enter employee details\n");
    printf("id\t name\t salary\n");
    for (int i = 0; i < n; i++)
    {
    	scanf("%d %s %d", &e[i].id,e[i].name,&e[i].salary);
    }
    do{
        printf("\n 1.Search by name\n 2.Search by id\n 3.Display all\n 4.Display all employees having salary > _____\n 5.Display employee having maximum salary.\n 6.Exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        	case 1:searchByName(e,n);break;
            case 2:searchById(e,n);break;
        	case 3:displayAll(e,n);break;
        	case 4:printf("enter salary\n");
                   scanf("%d\n",&salary);
                   salaryGT(e,n,salary);
        	       break;
            case 5:maxSalary(e,n);break;
        	case 6:break;
        }
      }while(choice!=6);
	return 0;
}
void searchByName(struct employee e[],int n)
{
	char name[10];
	printf("enter name to search details\n");
	scanf("%s",name);
	for (int i = 0; i < n; i++)
	{
	  if(strcmp(e[i].name,name)==0)
	  {
	  	printf("we have found match\n");
	  	printf("id\t name\t salary\n");
	  	printf("%d\t %s\t %d\n",e[i].id,e[i].name,e[i].salary);

	  }
	}
	
}

void searchById(struct employee e[],int n)
{
    int id;
	printf("enter id to search details\n");
	scanf("%d",&id);
	for (int i = 0; i < n; i++)
	{
	  if(e[i].id==id)
	  {
	  	printf("we have found match\n");
	  	printf("id\t name\t salary\n");
	  	printf("%d\t %s\t %d\n",e[i].id,e[i].name,e[i].salary);

	  }
	}

}

void displayAll(struct employee e[],int n)
{
	printf("here is the detail of all employees\n");
	printf("id\t name\t salary\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t %s\t %d\t\n",e[i].id,e[i].name,e[i].salary);
	}
}

void salaryGT(struct employee e[],int n,int salary)
{
	int i;
  for (i = 0; i < n; i++)
  {                                //error
  	if(e[i].salary>salary)
  	{
  		printf("id\t name\t salary\n");
  		printf("%d\t %s\t %d\t\n",e[i].id,e[i].name,e[i].salary);
  	}
  }
}

void maxSalary(struct employee e[20],int n)
{
	int i,c=0;
	int max=e[0].salary;
	for (i=1; i < n; i++)
	{
		if(e[i].salary>max)
		{
			max=e[i].salary;
			c = i;
		
		}

	}
	   printf("maxxxxxxxxxxx %d", max);
		printf("This employee is having maximum salary\n");
		printf("id\t name\t salary\n");
	  	printf("%d\t %s\t %d\t\n",e[c].id,e[c].name,e[c].salary);
      
} 