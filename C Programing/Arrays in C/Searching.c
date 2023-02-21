//                                                           * Linear Search *
 #include<stdio.h>
// int main()
// {
//     int ar[5],i,n;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("Enter Element%d:",i+1);
//         scanf("%d",&ar[i]);
//     }
//     printf("Enter the element to search in array:");
//     scanf("%d",&n);
//     for ( i = 0; i < 5; i++)
//     {
//         if (n==ar[i])
//         {
//             printf("The searched element is-%d and its index is-%d\n",n,i);
//         }
        
//     }
//     return 0;
// }
//                                                          * Binary Search * (Each element must be sorted)
#include<stdio.h>
int main()
{
    int ar[5],i,j,n,m=0,h=4,l=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Enter the element to search in array:");
    scanf("%d",&n);
     m=(l+h)/2;
    while (l<=h)
    {  
        if(ar[m]>n)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
        m=(l+h)/2;
    }
    if (ar[m]==n)
        {
            printf("The searched number is %d and its location is %d\n",n,m);
        }
    else
    {
        printf("Not found");
    }
    return 0;
}