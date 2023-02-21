                    //  Program to input strings from %c & %s and compare both strings
#include<stdio.h>
// #include<string.h>
// int main()
// {
//     char b[30],a[30],c;
//     int i=0;
//     printf("Enter sting 1:");
//     scanf("%s",b);
//     printf("Enter string 2:\n");
//     while(c!='\n')
//     {
//         fflush(stdin);
//         scanf("%c",&c);
//         a[i]=c;
//         i++;
//     }
//     a[i-1]='\0';
//     printf("%s\n",b);
//      printf("%s\n",a);
//      printf("strcmp for these strings returns %d\n",strcmp(b,a));//strcmp is to compare both strings
//     return 0;
// }
//                          Making own strlen function
// int length(char *p){
//     int c=0;
//     while (*p!='\0')
//     {
//         c++;
//         *p++;
//     }
//     return c;
// }
// int main()
// {
//     char a[30];
//     printf("Enter the string\n");
//     scanf("%s",&a);
//     printf("The length of the input string is %d", length(a));
//     return 0;
// }
//                                  Making a slice function to slice a string where m and n are starting points
// void slice(char *p,int m, int n){
//     int i=0;

//     while ((m+i)<n)
//     {   p[i]=p[i+m];
//         i++;
//     }
//     p[i]='\0';
// }
// int main()
//  {
//         int m,n;
//     char c[30];
//    printf("Enter string:");
    // scanf("%s",&c);
//     printf("Enter m and n:");
//     scanf("%d%d",&m,&n);
//     slice(c,m,n);
//     printf("The string is %s",c);
//     return 0;
// }
//              Making clone of strcpy
// void copy(char *p,char *q){
//     int i=0;
//     while (p[i]!='\0')
//     {
//         q[i]=p[i];
//         i++;
//         // p++;
    
//     }
//     q[i]='\0';
// }
// int main()
// {
//     int s[30],t[30];
//     printf("Enter string:");
//     scanf("%s",&s);
//     copy(s,t);
//     printf("%s",t);
//     return 0;
// }
//                     Encrypting message through a string
// void enc(char *p)
// {
//     char *ptr=p;
//     while (*ptr!='\0')
//     {
//         *ptr=*ptr+1;
//         ptr++;
//     }
    
// }
// int main()
// {
//     char a[]="harry";
//     enc(a);
//     printf("%s",a);
//     return 0;
// }
//                                              to decrypt
void dec(char *p)
{
    char *ptr=p;
    while (*ptr!='\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
    
}
int main()
{
    char a[]="ibssz";
    dec(a);
    printf("%s",a);
    return 0;
}