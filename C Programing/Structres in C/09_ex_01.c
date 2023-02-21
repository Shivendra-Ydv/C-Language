#include<stdio.h>
int linkfloat();

typedef struct student{
	int roll,yoj;
	char name[10],course[10],dep[10];
}student;
int name(student s[]);
int roll(student s[]);
int display(student s[]);
int main()
{
	student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the Roll Number:");
		scanf("%d",&s[i].roll);
		printf("Enter the Name:");
		scanf("%s",&s[i].name);
		printf("Enter the Course:");
		scanf("%s",&s[i].course);
		printf("Enter the Department:");
		scanf("%s",&s[i].dep);
		printf("Enter the Year of joining:");
//		fflush(stdin);
		scanf("%d",&s[i].yoj);
		printf("\n");
	}
//	display(s);
	name(s);
	roll(s);
	return 0;
}
int linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;
    return 0;
}
int display(student s[5])
{	int i;
	for(i=0;i<=5;i++)
	{
		printf("%d\t%s\t%s\t%s\t%d\n",s[i].roll,s[i].name,s[i].course,s[i].dep,s[i].yoj);
	}
return 0;
}
int name(student s[5])
{	int n,i;
	printf("Enter the year to print names of student joined in that year:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(s[i].yoj==n)
		printf("%s\n",s[i].name);
	}
    return 0;
}
int roll(student s[5])
{	int n,i;
	printf("Enter the roll number to print the data of student:");	
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(s[i].roll==n)
		printf("Roll Number = %d\nName = %s\nCourse = %s\nDepartment = %s\n Year Of Joining = %d\n",s[i].roll,s[i].name,s[i].course,s[i].dep,s[i].yoj);
	}
    return 0;
}