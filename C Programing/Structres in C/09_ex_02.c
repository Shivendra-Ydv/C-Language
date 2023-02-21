#include<stdio.h>
typedef struct banking
{
    int acc;
    char name[10];
    int bal;
}bank;
int linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;
    return 0;
}
int below100(bank m[3]){
    printf("\nData of customers having balance less than 100.\n");
    int i;
    for ( i = 0; i < 3; i++)
    {
        if(m[i].bal < 100){
            printf("Account Number : %ld\n",m[i].acc);
            printf("Name : %s\n",m[i].name);
        }
    }
    
    return 0;
}
int display(bank m[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Account Number : %ld\n",m[i].acc);
        printf("Name : %s\n",m[i].name);
        printf("Balance : %ld\n",m[i].bal);
        printf("\n");
    }
    return 0;
}
int withdrawal(bank *n[3])
{
    int a,b,ca;
    printf("Press 1 to deposit.\nPress 2 to withdrawal.\n");
    scanf("%d",&ca);
    printf("Enter Account Number : ");
    scanf("%ld",&a);
    printf("Enter Amount : ");
    scanf("%d",&b);

    printf("\n\n%d\n\n",n[1]->acc);
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n%d\n\n",b);
        if(a==n[i]->acc){
            if(ca==1){
                (n[i]->bal)=b+(n[i]->bal);
            }
            else if((n[i]->bal)<100){
                printf("Sorry! Insufficient balance.");
            }
            else if(ca==2)
            {
                (n[i]->bal)=(n[i]->bal)-b;
            }
        }
    }
    return 0;
}
int main()
{   bank m[3],*s;
    int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the Account Number:");
		scanf("%d",&m[i].acc);
		printf("Enter the Name:");
		scanf("%s",&m[i].name);
        fflush(stdin);
		printf("Enter the Balance:");
		scanf("%d",&m[i].bal);
		printf("\n");
	}
    s=&m;
    while (1)
    {
        int c;
        printf("Press 1 to see the data of customers having balance less than 100.\nPress 2 to Withdrawal/Deposit.\nPress 3 to exit.\nPress 4 to display. \n");
        scanf("%d",&c);
        if (c==1)
        {
            below100(m);
        }
        else if(c==2){
        withdrawal(s);
        }
        else if(c==4)
        display(m);
        else if(c==3)
        break;
    }
return 0;
}