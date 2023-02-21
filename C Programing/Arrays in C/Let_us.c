//                               Program to interchange elements at odd position with elements at even position
#include<stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//      int t;
//     for (int i = 0; i <=9; i+2)
//     {
//         t=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=t;
//     }
//     for (int i = 0; i <= 9; i++)
//     {
//           printf("%d\t",arr[i]);
//     }
//     return 0;
// }
//                          Program to copy 5 elemets of an array to another
// int main()
// {
//     int ar1[5],ar2[5],i,j;
//     printf("Enter 5 elements of array\n");
//     for ( i =0; i < 5; i++)
//     {
//         scanf("%d",&ar1[i]);
//     }
//     for ( i = 0; i < 5; i++)
//     {
//          ar2[i]=ar1[4-i];
//         printf("ar1[%d]=%d\tar2[%d]=%d\n",i,ar1[i],i,ar2[i]);
//     }
//     return 0;
// }
//                         Program to search an element in an array and print its occurance
// int main()
// {
//     int ar[10]={1,2,9,4,5,9,7,8,9,9},n,c=0;
//     printf("Enter the element to search in array:\n");
//     scanf("%d",&n);
//     for (int i = 0; i < 10; i++)
//     {
//         if (n==ar[i])
//         {
//             c++;
//         }
        
//     }
//     printf("%d is occured %d times in array.\n",n,c);
//     return 0;
// }
//                                  Program to find positive,even,odd elements in array
// int main()
// {
//     int arr[25],p=0,e=0;
//     for (int i = 0; i < 25; i++)
//     {
//         printf("Enter Element%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 25; i++)
//     {
//         if (arr[i]>0)
//         {
//             p++;
//         }
//         if(arr[i]%2==0)
//         {
//             e++;
//         }
//     }
//     printf("Number of positive integers:%d\n",p);
//     printf("Number of negative integers:%d\n",25-p);
//     printf("Number of even integers:%d\n",e);
//     printf("Number of odd integers:%d\n",25-e);
// }
//                                            Program to cheack opposite elements are same or not 
// int main()
// {
//     int n;
//     printf("Enter the number of element of the array:");
//     scanf("%d",&n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Element%d:",i+1);
//         scanf("%d",&ar[i]);
//     }
//     for (int i = 0; i < n/2; i++)
//     {
//         if(ar[i]==ar[n-1-i])
//         {
//             printf("\n%d is equal to %d",ar[i],ar[n-1-i]);
//         }
//     }
    
//     return 0;
// }
//                      Program to find smallest number in an array
// int find(int *p,int n)
// {   int s=32667;
//     for (int i = 0; i < n; i++)
//     {
//         if(s>*p)
//         {
//             s=*p;
//             printf("%d and %d\n",s,*p);
//         }
//         p++;
//     }
//     return s;
// }
// int main()
// {   
//     int n,*p;
//     printf("Enter the number of element of the array:");
//     scanf("%d",&n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Element%d:",i+1);
//         scanf("%d",&ar[i]);
//     }
//     p=&ar[0];
   
//     printf("Smallest number is %d", find(p,n));
//     return 0;
// }
//                                 * Program to implement insertion sort algorithm *
// int main(){
//     int n,t,i,j;
//     printf("Enter the number of element of the array:");
//     scanf("%d",&n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Element%d:",i+1);
//         scanf("%d",&ar[i]);
//     }
//     for ( i = 1; i <n ; i++)
//     {
//         t=ar[i];
//         j=i-1;
//         while (j>=0&&ar[j]>t)
//         {
//             ar[j+1]=ar[j];
//             j--;
//         }
//         ar[j+1]=t;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element %d:%d\n",i+1,ar[i]);
//     }
    
// }
//                                  Program to compute area of 6 triangles using two sides and one angle
//                                              and to find largest area all areas
#include<math.h>
void area(float *tri,float *s1,float *s2,float *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        tri[i]=0.5*(s1[i]*s2[i])*sin(a[i]);
    }    
}
void large(float *tri,int n)
{   float l;int p;
    for (int i = 0; i < n; i++)
    {
        l=tri[0];
        if (l<tri[i])
        {
            l=tri[i];
            p=i;
        }
    }
  printf("The triangle with largest area is:%f  %d ",l,p+1);
    
}
int main()
{
    float tri[6],s1[6],s2[6],a[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter details of triangle %d:\n",i+1);
        printf("Side 1=");
        scanf("%f",&s1[i]);
        printf("Side 2=");
        scanf("%f",&s2[i]);
        printf("Angle =");
        scanf("%f",&a[i]);
    }
    area(tri,s1,s2,a,6);
    for (int i = 0; i < 6; i++)
    {
        printf("Area of triangle %d is:%f\n",i+1,tri[i]);
    }
    large(tri,6);
    return 0;
    
}