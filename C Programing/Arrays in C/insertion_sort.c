#include<stdio.h>
int main()
{
    int ar[5],i,j,t;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&ar[i]);
    }
    for ( i = 1; i < 5; i++)
    {
        t=ar[i];
        j=i-1;
        while (j>=0&&ar[j]>t)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=t;
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}