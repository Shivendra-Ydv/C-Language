int main(){
    int n,t,i,j;
    printf("Enter the number of element of the array:");
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&ar[i]);
    }
    for ( i = 1; i <n ; i++)
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
    
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:%d\n",i+1,ar[i]);
    }
    
}