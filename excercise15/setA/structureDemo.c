/* Aim: Create a structure student(roll number,name,marks of three subjects,percentage). Accept the details of n students and write a menu driven program toperform the following operations. Write seperate functions for different options.
1]Search
2]Modify
3]Display all student details
4]Display all students having percentage > ____
5]Display student having mkaximum percentage */
#include<stdio.h>
#include<string.h>
struct student 
{
	int roll_no,math,fileo,proc;
	char name[20];
	float percent;
};
void Search(struct student S[],int size);
void Modify(struct student S[],int size,int roll_no);
void DisplayAll(struct student S[],int size);
void PercentGT(struct student S[],float checkPercent,int size);
void MaxPercent(struct student S[],int size);
void main()
{
	struct student S[200];
	int i,roll_no,size,ope;
	float checkPercent;
	printf("\n How many students are there:- ");
	scanf(" %d",&size);
	printf("\n Enter the information of students as follow:- \n \n");
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C \n \n");
 
	for(i=0;i<size;i++)
	{
	scanf(" %d %s %d %d %d",&S[i].roll_no,S[i].name,&S[i].math,&S[i].fileo,&S[i].proc);
	S[i].percent=(S[i].math+S[i].fileo+S[i].proc)/3;
	}
	do{
	printf("\n \t ***** Menu *****");
	printf("\n 1.Search");
	printf("\n 2.Modify");
	printf("\n 3.Display all student details");
	printf("\n 4.Display all students having percentage greater than ___");
	printf("\n 5.Display student having maximum percentage");
	printf("\n 6.Exit \n \n");
	printf("\n Enter Your Choice:- ");
	scanf(" %d",&ope);
	switch(ope)
	{
	case 1:
	Search(S,size);
	break;
	case 2:
	printf("\n Enter roll no to modify the details:- ");
	scanf(" %d",&roll_no);
	Modify(S,size,roll_no);
	break; 
	case 3:
	DisplayAll(S,size);
	break;
	case 4:
	printf("\n Enter percentage:- ");
	scanf("%f",&checkPercent);
	PercentGT(S,checkPercent,size);
	break;
	case 5:
	MaxPercent(S,size);
	break;
	}}while(ope!=6);
}
void Search(struct student S[],int size)
{
	char name[20];
	int i,flg=0,roll_no,searchBy;
	do{
	printf("\n How do you want to search:- 1.By Roll No \n \t\t\t     2.By Name \n");
	scanf(" %d",&searchBy);
   
	if(searchBy==1)
	{
	printf("\n Enter roll no of the student:- ");
	scanf(" %d",&roll_no);
	} 
	else
	{
	printf("\n Enter the name of the student:- ");
	scanf(" %s",name);
	}}while(searchBy<1 || searchBy>2);
	for(i=0;i<size;i++)
	{
		if(S[i].roll_no==roll_no || strcmp(S[i].name,name)==0)
		{
		flg=1;
		break;
		}
	} 
 
	if(flg==1)
	{
	printf("\n We have found this result:- \n ");
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n"); 
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",S[i].roll_no,S[i].name,S[i].math,S[i].fileo,S[i].proc,S[i].percent);
	}
	else
	printf("\n We haven't found any record \n \n");
}
// Modify Function
void Modify(struct student S[],int size,int roll_no)
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
	for(i=0;i<size;i++)
	{
		if(S[i].roll_no==roll_no)
		{
			if(update==1)
			{
			S[i].roll_no=newData;
			break;
			}   
			else if(update==3)
			{
			S[i].math=newData;
			break;
			} 
			else if(update==4)
			{
			S[i].fileo=newData;
			break;
			} 
			else if(update==5)
			{
			S[i].proc=newData;
			break;
			}
			else
			{
			strcpy(S[i].name,name);
			break; 
			} 
		}
	}
 
	printf("\n Modified details of students are as follows:- \n");
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n");
	for(i=0;i<size;i++)
	{ 
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",S[i].roll_no,S[i].name,S[i].math,S[i].fileo,S[i].proc,S[i].percent); 
	}
}
// DisplayAll Function
void DisplayAll(struct student S[200],int size)
{
	int i;
	printf("\n The Information of students is as follow:- \n \n");
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n"); 
 
	for(i=0;i<size;i++)
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",S[i].roll_no,S[i].name,S[i].math,S[i].fileo,S[i].proc,S[i].percent);
}
// PercentGT Function
void PercentGT(struct student S[],float checkPercent,int size)
{
	int i;
	printf("\n The Information of students who scored percentage>%f :- \n \n",checkPercent);
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n"); 
 
	for(i=0;i<size;i++)
	{
		if(S[i].percent>checkPercent)
		{
		printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",S[i].roll_no,S[i].name,S[i].math,S[i].fileo,S[i].proc,S[i].percent);
		}
	}
}
// MaxPercent Function
void MaxPercent(struct student S[200],int size)
{
	int i;
	float maxPercent=S[0].percent;
	for(i=0;i<size;i++)
		if(S[i].percent>maxPercent)
		{  
		maxPercent=S[i].percent;
		break;
		}
	printf("\n \"%s\" scored maximum percentage. Below are his details:- - \n ",S[i].name);
	printf("\n Roll No\t Name \t Mathematics \t File Organisation \t Programming In C  \t Percentage \n \n"); 
	printf("\n %d \t\t %s \t %6d \t\t %1d \t\t %8d \t\t %f \n",S[i].roll_no,S[i].name,S[i].math,S[i].fileo,S[i].proc,S[i].percent);
}