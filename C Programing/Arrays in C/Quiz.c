#include<stdio.h>
void display(int *ptr,int *i,int *j);
int main()
{
    int a,b,i,j;
    printf("Enter the vlaues of A and B:\n");
    scanf("%d%d",&a,&b);
    int arr[a][b],*ptr,*x,*y;
    for(i=0;i<a;i++)
    {
        for ( j = 0; j <b; j++)
        {
            printf("Enter A%d B%d:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
        
    }
    for(i=0;i<a;i++)
    {
        for ( j = 0; j < b; j++)
        {
            ptr=&arr[i][j];
            x=&i;
            y=&j;
            display(ptr,x,y);
        }
        
    }
    return 0;
}
void display(int *ptr,int *x,int *y)
{   printf("You entered A%d and B%d:%d\n",*(x)+1,*(y)+1,*ptr);
}