//  Making a copy of strcat function
#include<stdio.h>
#include<string.h>
void xstrcat(char *p,char *q)
{   int i=0,l;
    l=strlen(p);
    while (q[i]!='\0')
    {
        p[l+i]=q[i];
        i++;
    }
    
}
int main()
{
    char a[]="shivendra",b[]="yadav";
    xstrcat(a,b);
    printf("%s\n%s\n",a,b);
    return 0;
}