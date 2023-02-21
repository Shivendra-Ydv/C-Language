#include<stdio.h>
int main()
{
    int ar[5],i,j,m,t;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&ar[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        m=i;
        for ( j = i+1; j < 5 ; j++)
        {
            if (ar[m]>ar[j])
            {
                m=j;
            }
        }
        t=ar[i];
        ar[i]=ar[m];
        ar[m]=t;
    }
      for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}
    