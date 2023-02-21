//  Reverse strings stored in an array pointer
#include<stdio.h>
#include<string.h>
void xstrrev(char *a){
    int l;char *t,temp;
    l=strlen(a);
    t=a+l-1;
    for (int i = 1; i <= l/2; i++)
    {
        temp=*a;
        *a=*t;
        *t=temp;
        a++;t--;
    }
    
}
int main()
{
    char a[][10]={
        "ram","shyam","lakhan","shiva"
    };
    for (int i = 0; i < 4; i++)
    {
        xstrrev(a[i]);
        printf("%s\n",a[i]);
    }
return 0;
}