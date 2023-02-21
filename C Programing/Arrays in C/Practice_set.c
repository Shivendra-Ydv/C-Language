// //                                        practice-1&2
#include<stdio.h>
// int main()
// {
//     int arr[10],*ptr,i;
//     for ( i = 0; i < 10; i++)
//     {
//         printf("Enter the Number %d:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     ptr=arr;
//     printf("Number 1:\n",*ptr);
//     ptr+=2;
//     printf("Number 3:\n",*ptr);
//     printf("experiment=%d",*(arr+3));
//     return 0;
// }
//                               Practice-3&4(Program to print table of 5 using array)
// int main()
// {
//     int table[10],i,n;
//     printf("Enter the number to print its table:");
//     scanf("%d",&n);
//     printf("\t\t\t\t\t\t\tTable of %d:\n",n);
//     for ( i = 0; i < 10; i++)
//     {   table[i]=n*(i+1);
//         printf("\t\t\t\t\t\t\t%dx%d=%d\n",n,i+1,table[i]);
//     }
    
// return 0;
// }
//                               Practice-5(Program to reverse the elements of the array)
void reverse(int *arr,int n)
{   int t;
    for (int i = 0; i < (n/2); i++)
    {
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}
int main()
{   
    int i,n;
      printf("Enter the number:");
      scanf("%d",&n);
      int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter Number%d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    for ( i = 0; i < n; i++)
    {
        printf("The value of Element %d is %d.\n",i+1,arr[i]);
    }
     return 0;
}