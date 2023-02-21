// Program to convert string in integer format  to integer
#include<stdio.h>
// int stoi(char c[]);
// int main()
// {
//     int n;
//     char c[20];
//     printf("Enter string in integer format\n");
//     scanf("%s",c);
//     n=stoi(c);
//     printf("%d",n);
//     return 0;
// }
// int stoi(char c[]){
//     int i=0,s=0;
//     while (c[i]!='\0')
//     {
//         if (c[i]<48||c[i]>57)
//         {
//             // printf("Invalid sting");
//             // continue;
//             printf("");
//         }
//         else
//         {
//             s=s*10+(c[i]-48);
//         }
//         i++;
//     }
//     return s;
// }
//      Fabonacci series of words
// #include<string.h>
// int main()
// {
//     char a[50],b[50]="a",c[50]="b";
//     for (int i =1 ; i < 5; i++)
//     {
//         strcpy(a,c);
//         strcat(a,b);
//         printf("%s\n",a);
//         strcpy(b,c);
//         strcpy(c,a);
//     }
//     return 0;
// }
