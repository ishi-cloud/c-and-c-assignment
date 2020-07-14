#include<stdio.h>
#include<string.h>
struct emp
{char name[20];
int id;
float experience;
float salary;

};
int main()
{struct emp s;
for(int i=1;i<=5;i++)
{
struct emp si;
printf("ENTER NAME OF EMPLOYEE\n");
scanf("%s",&si.name);
printf("ENTER ID\n");
scanf("%d",&si.id);
printf("ENTER EXPERIENCE\n");
scanf("%f",&si.experience);
printf("ENTER SALARY\n");
scanf("%f",&si.salary);
printf("NAME: %s\t EMPLOYEE ID : %d\t  EXPERIENCE : %f\t  SALARY :%f\n",si.name,si.id,si.experience,si.salary);


}


}
