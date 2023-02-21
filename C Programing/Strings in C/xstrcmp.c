//  Making a copy of strcmp function
#include<stdio.h>
int xstrcmp(const char *p,const char *q)
{  
    while (*p == *q)
    { 
        if(*p == '\0')
        {
            return 0;
            p++;
            q++;
        }
    }   
     return (*p - *q);
}
int main()
{
    char a[]="shiv",b[]="shiv";
    int i=xstrcmp(a,b);
    printf("%d\n",i);
    return 0;
}