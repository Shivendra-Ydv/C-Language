//                          Alphabetically sorting a set of name stored in an array
#include<stdio.h>
#include<string.h>
int main()
{
    char *a[]={
        "sagar","yash","aman","anant"
    };
    char *t;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (strcmp(a[i],a[j])>0)
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;     
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",a[i]);
    }
    
return 0;
}