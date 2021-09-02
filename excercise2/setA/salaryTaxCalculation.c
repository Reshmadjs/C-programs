// Write a program, which accepts annual basic salary of an employee and calculates and
// displays the Income tax as per the following rules.
// Basic: < 1,50,000
// Tax = 0
// 1,50,000 to 3,00,000
// Tax = 20%
// > 3,00,000
// Tax = 30%

#include <stdio.h>
int main(int argc, char const *argv[])
{
	float salary,tax;
    printf("enter salary\n");
    scanf("%f",&salary);
    if(salary<150000)
    {
    	printf("tax is 0 per so total salary will be %f\n",salary);
    }
    else
    	if ((salary>=150000) && (salary<=300000))
    	{
    		printf("20 per tax is applicable\n");
            tax=0.2*salary;
            salary=salary-tax;
            printf("total salary is %f\n",salary);
    	}
    	else
    		if ((salary>300000))
    		{
    			printf("30 per salary is applicable\n");
    			tax=0.3*salary;
            salary=salary-tax;
            printf("total salary is %f\n",salary);
    		}
	return 0;
}