#include<stdio.h>
//                              Alice in wonder land
// int main()
// {
//     char str1[20],str2[20],str3[20],str4[20];
//     scanf("%s%s%s%s",str1,str2,str3,str4);
//     printf("%s%s%s%s",str1,str2,str3,str4);
// return 0;
// }
//                                      verifying isbn number
// int main()
// {
//     int n[10],sum=0;
//     printf("Enter the ISBN number:\n");
//     for (int i = 0; i < 10; i++)
//     {
//          scanf("%d",&n[i]);
//     }
    
//     // printf("***\n%d\n***",sizeof(n));
//     for (int i = 0; i <10; i++)
//     {
//         if (n=='X')
//         {
//             sum=sum+10*i;
//         }
//         else
//         {  
//             sum=sum+n[i]*(i+1);
//          printf("%d\n%d\n",n[i],sum);
//         }
//     }
//     if (sum%11==0)
//     {
//         printf("You have entered correct ISBN number!");
//     }
//     else
//     {
//         printf("Please enter correct ISBN number!");
//     }
//     return 0;
// }
//                                             Or
int main()
{
    char n[15];
    int s=0;
    printf("Enter 10 digit ISBN number:");
    gets(n);
    for (int i = 0; i < 10; i++)
    {
       n[i]=n[i]-48;
    //    printf("%d\n",n[i]);
        s=s+(n[i]*(i+1));
        // printf("%d\n",s);
    }
      if (s%11==0)
    {
        printf("You have entered correct ISBN number!");
    }
    else
    {
        printf("Please enter correct ISBN number!");
    }
    return 0;
}