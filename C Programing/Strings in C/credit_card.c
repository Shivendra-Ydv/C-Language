//                          Credit card number varification             page-272
#include<stdio.h>
int main()
{
    char n[16];
    int e[16],s=0;
    printf("Enter 16 digit credit card number:");
    gets(n);
    for (int i = 0; i < 16; i++)
    {
        n[i]-=48;
        if(i%2==0)
        {
            e[i]=2*n[i];
            if(e[i]>=10)
            {
                e[i]-=9;
            }
        }
        else{
            e[i]=n[i];
        }
        s=s+e[i];
    }
    if(s%10==0)
    {
        printf("Valid credit card number!");
    }
    else
        printf("Invalid credit card number!");
return 0;
}