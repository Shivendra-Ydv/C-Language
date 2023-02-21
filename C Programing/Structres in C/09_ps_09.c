#include<stdio.h>
typedef struct time_stamp
{
    int year,month,day,hour,minute,second;
}time;
int cmp(time x,time y){
    if(x.year>y.year)
    return 1;
    else if(x.year<y.year)
    return -1;
    else if(x.month>y.month)
    return 1;
    else if(x.month<y.month)
    return -1;
    else if(x.day>y.day)
    return 1;
    else if(x.day<y.day)
    return -1;
    else if(x.hour>y.hour)
    return 1;
    else if(x.hour<y.hour)
    return -1;
    else if(x.minute>y.minute)
    return 1;
    else if(x.minute<y.minute)
    return -1;
    else if(x.second>y.second)
    return 1;
    else if(x.second<y.second)
    return -1;
    return 0;
}
int main()
{   time a,b;int n;
    printf("Enter the first time in HH:MM:SS formate-");
    scanf("%d%d%d",&a.hour,&a.minute,&a.second);
    printf("Enter the first day in DD/MM/YYYY formate-");
    scanf("%d%d%d",&a.day,&a.month,&a.year);
    printf("Enter the second time in HH:MM:SS formate-");
    scanf("%d%d%d",&b.hour,&b.minute,&b.second);
    printf("Enter the second day in DD/MM/YYYY formate-");
    scanf("%d%d%d",&b.day,&b.month,&b.year);
    printf("Your first time stamp is %d:%d:%d %d/%d/%d\n",a.hour,a.minute,a.second,a.day,a.month,a.year);
    printf("Your second time stamp is %d:%d:%d %d/%d/%d\n",b.hour,b.minute,b.second,b.day,b.month,b.year);
    n=cmp(a,b);
    if(n==1)
    printf("First time stamp is greater the second\n");
    if(n==-1)
    printf("Second time stamp is greater the First\n");
    if(n==0)
    printf("Both stamps are same\n");
    // printf("\n%d\n",n);
return 0;
}