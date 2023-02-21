#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[10];
    int code;
    float salary;
}emp;
int main()
{   emp p1,*p;
    strcpy(p1.name,"Shivu");
    p1.code=1;
    p1.salary=10000;
    printf("The name of the employee is %s.\n",p1.name);
    printf("The code of the employee is %d.\n",p1.code);
    printf("The salary of the employee is %0.2f.\n",p1.salary);
    p=&p1;
    p->salary=15000;
    p->code=2;
    strcpy(p->name,"Harray");
    printf("The name of the employee is %s.\n",p->name);
    printf("The code of the employee is %d.\n",p->code);
    printf("The salary of the employee is %0.2f.\n",p->salary);

return 0;
}