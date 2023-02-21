#include<stdio.h>
void print(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int main()
{
    int ar[5],i,j,t,c=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Array before bubble sort:\n");
    print(ar,5);
    for ( i = 0; i <5; i++)
    {printf("Working on pass %d\n",i+1);
        for (int j= 1; j<=4 ; j++)
        {
            if (ar[j]<ar[j-1])
            {   t=ar[j-1];
                ar[j-1]=ar[j];
                ar[j]=t;
                c++;
            }  
        }
       if (c==0)
       {
            printf("Array after bubble sort:\n");
    print(ar,5);
           return 0;
       }
        
    }
    printf("Array after bubble sort:\n");
    print(ar,5);
    return 0;
}