// Create a structure student (roll number, name, marks of 3 subjects, percentage). Accept
// details of n students and write a menu driven program to perform the following operations. Write
// separate functions for the different options.
// i)Search
// ii)Modify
// iii)Display all student details
// iv)Display all student having percentage > _____
// v)Display student having maximum percentage
//https://www.computerscienceai.com/2018/02/c-program-to-create-structure-student.html
#include<stdio.h>
#include <string.h>
struct student
{
	int rno,maths,CS,Networking;
	char name[20];
	int marks[3];

	float perc;
};
void search(struct student s[],int n);
void Modify(struct student S[],int n,int rno);
void DisplayAll(struct student s[],int n);
void PercentGT(struct student s[],float checkPercent,int size);
void MaxPercent(struct student s[],int size);
int main(int argc, char const *argv[])
{
	struct student s[20];
	int sum=0,n,choice,rno;
	float checkPercent;
	printf("how many students\n");
	scanf("%d",&n);
    printf("enter details of students\n");
    printf("\n Roll no\t Name\t CS\t Maths\t Networking\n");
    
    
    	
    	
        
    	for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d %d",&s[i].rno,s[i].name,&s[i].CS,&s[i].maths,&s[i].Networking);
        s[i].perc=(s[i].maths+s[i].CS+s[i].Networking)/3;
      printf("percentage=%f\n",s[i].perc);
    }
    
    do
    {
    	printf("1.search\n 2.modify\n 3.Display all student details\n 4.Display all student having percentage > _____\n 5.Display student having maximum percentage\n");
    	printf("enter choice\n");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:search(s,n);break;
    		case 2:
                   printf("\n Enter roll no to modify the details:- ");
					scanf(" %d",&rno);
					Modify(s,n,rno);

    		        break;
    		case 3:DisplayAll(s,n);break;
    		case 4:printf("\n Enter percentage:- ");
					scanf("%f",&checkPercent);
					PercentGT(s,checkPercent,n);break;
    		 case 5:MaxPercent(s,n);break;

    	}
    }while(choice!=6);

	return 0;
}
void search(struct student s[],int n)
{
	int i;
	char name[20];
	int flag=1;
	printf("\n Enter the name of the student to search:- ");
	scanf("%s",name);
	for (i = 0; i < n; i++)
	{
		 if(strcmp(s[i].name,name)==0)
		{
	        flag=0;
	        break;
		}
	}
	

	if(flag==0)
	{
		printf("we have found details\n");
		printf("\n We have found this result:- \n ");
	printf("\n Roll No\t Name \t maths  \t CS \t Networking  \t Percentage \n \n");
		printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",s[i].rno,s[i].name,s[i].maths,s[i].CS,s[i].Networking,s[i].perc);
	}
	else
		printf("we havent found details\n");
	
    
}
void Modify(struct student s[],int n,int rno)
{
   char name[20]; 
	int i,update,newData;
	do{
	printf("\n What do you want to update:- 1.Roll NO \n \t\t\t      2.Name \n \t\t\t      3.Marks of 'Mathematics' \n \t\t\t      4.Marks of 'File Organisation' \n \t\t\t      5.Marks of 'Programming in C' \n");
	scanf(" %d",&update);
	if(update==3 || update==4 || update==5)
	{
	printf("\n Enter new marks:- ");
	scanf("%d",&newData);
	}
	else if(update==1)
	{
	printf("\n Enter new roll no:- ");
	scanf(" %d",&newData);
	}
	else if(update==2)
	{
	printf("\n Enter new name:- ");
	scanf(" %s",name);
	}
	else 
	{
	printf("\n Please make a valid choice \n \n"); 
	}
 
	}while(update<1 || update>5);
	for(i=0;i<n;i++)
	{
		if(s[i].rno==rno)
		{
			if(update==1)
			{
			s[i].rn=newData;
			break;
			}   
			else if(update==3)
			{
			s[i].maths=newData;
			break;
			} 
			else if(update==4)
			{
			s[i].CS=newData;
			break;
			} 
			else if(update==5)
			{
			s[i].Networking=newData;
			break;
			}
			else
			{
			strcpy(s[i].name,name);
			break; 
			} 
		}
	}
 

}

void DisplayAll(struct student s[],int n)
{
int i;
	printf("\n The Information of students is as follow:- \n \n");
	printf("\n Roll No\t Name \t maths \t CS\t Networking  \t Percentage \n \n"); 
 
	for(i=0;i<n;i++)
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",s[i].rno,s[i].name,s[i].maths,s[i].CS,s[i].Networking,s[i].perc);
}
void PercentGT(struct student s[],float checkPercent,int size)
{
	int i;
	printf("\n The Information of students who scored percentage>%f :- \n \n",checkPercent);
	printf("\n Roll No\t Name \t Mathematics \t CS \t Networking  \t Percentage \n \n"); 
 
	for(i=0;i<size;i++)
	{
		if(s[i].perc>checkPercent)
		{
		printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",s[i].rn,s[i].name,s[i].maths,s[i].CS,s[i].Networking,s[i].perc);
		}
	}
}
// MaxPercent Function
void MaxPercent(struct student s[200],int size)
{
	int i;
	float maxPercent=s[0].perc;
	for(i=0;i<size;i++)
		if(s[i].perc>maxPercent)
		{  
		maxPercent=s[i].perc;
		break;
		}
	printf("\n \"%s\" scored maximum percentage. Below are his details:- - \n ",s[i].name);
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n"); 
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",s[i].rno,s[i].name,s[i].maths,s[i].CS,s[i].Networking,s[i].perc);
}
