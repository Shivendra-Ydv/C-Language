//                             Progarm to find largest number from a 5 row 5 coloumn matrix(Program-14.1)
#include<stdio.h>
// int main()
// {
//     int ar[5][5],i,j,l=0,a,b;
//     for ( i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//         printf("Enter Element%d|%d:",i+1,j+1);
//         scanf("%d",&ar[i][j]);
//         if (l<ar[i][j])
//         {
//             l=ar[i][j];
//             a=i;
//             b=j;
//         }
//         }
//     }
//     printf("The largest number is %d and its index is [%d][%d]\n",l,a,b);
//     return 0;
// }
//                                       Program(14.1) to obtain transpose of a 4x4 matrix
// void print(int a[][4],int n,int m)
// {   int i,j;
//     for ( i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
    
// }
// int main()
// {
//     int ar[4][4],i,j,tr[4][4];
//     for ( i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//         printf("Enter Element%d|%d:",i+1,j+1);
//         scanf("%d",&ar[i][j]);
//         }
//     }
//     printf("Orignal Matrix:\n");
//     print(ar,4,4);
//     for ( i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             tr[i][j]=ar[j][i];
//         }
//     }
//     printf("Transpose of Matrix:\n");
//     print(tr,4,4);
//     return 0;
// }
//                                                              Exercise
                                            // Find out the output of the following program[A](a)
// int main()
// {
//     int n[3][3]={
//         {2,4,3},{6,8,5},{3,5,1}
//     };
//     printf("%d\n%d\n%d\n",*n,n[1][1],n[2][2]);
//     return 0;
// }
//                                                                     [A](b)
// int main()
// {
//     int n[3][3]={
//         {2,4,3},{6,8,5},{3,5,1}
//             };
//     int i,*ptr;
//     ptr=&n[0][0];
//     for (int i = 0; i <= 8; i++)
//     {
//         printf("%d\n",*(ptr+i));
//     }
//     return 0;
// }
//                                                                       [A](c)

// int main()
// {   int n[3][3]={
//      {2,4,3,6,8,5,3,5,1}
//     };
//     int i,j;
//     for ( i = 0; i < 3; i++)
//         for ( j= 0; j <3; j++)
//         printf("%d\t%d\n",n[i][j],*(*(n+i)+j));
//     return 0;
// }    
//                                                                  [B](a)
// int main()
// {
//     int twod[][2]={
//         2,4,6,8
//     };
//     printf("%d\n",twod);
//     printf("%d\n",twod+1);
//     return 0;
// }
    //                                                              [B](c)
// int main()
// {
//     int three[3][]={
//         {2,4,3},{6,8,2},{2,3,1}
//     };
//     printf("%d\n",three[1][1]);
//     return 0;
// }
//                                                              [C](a)
// int main()
// {
//     int thr[3][2][3]={
//         {
//             {2,4,3},{3,2,3}
//         },
//         {
//             {1,2,3},{3,2,1}
//         },
//         {
//             {7,8,6},{9,9,9}
//         }
//     };
//     printf("The First Element is %d\n",thr[0][0][0]);
//     printf("The Last Element is %d\n",thr[2][1][2]);
//     return 0;
// }
//                                                            [C](b)
// int main()
// {
//     int i,j=25;
//     int *pi,*pj=&j;
//     *pj=j+5;
//     j=*pj+5;
//     pj=pj;
//     *pi=i+j;
//     printf("&i=%d\n&j=%d\npj=%d\n*pj=%d\ni=%d\npi=%d\n*pi=%d\n(Pi+2)=%d\n(*pi+2)=%d\n*(Pi+2)=%d\n",&i,&j,pj,*pj,i,pi,*pi,(pi+2),(*pi+2),*(pi+2));
//     return 0;
// }
//                                                      [C](c)
// int main()
// {
//     int x[3][5]={
//         {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}
//     };
//     int *n=&x;
//     printf("1=%d\n",*(*(x+2)+1));
//     printf("2=%d\n",*(*x+2)+5);
//     printf("3=%d\n",*(*(x+1)));
//     printf("4=%d\n",*(*(x)+2)+1);
//     printf("5=%d\n",*(*(x+1)+3));
//     printf("6=%d\n",*n);
//     printf("7=%d\n",*(n+2));
//     printf("8=%d\n",(*(n+3)+1));
//     printf("9=%d\n",*(n+5)+1);
//     printf("10=%d\n",++*n);
//     return 0;
// }
//                                                      [C](d)
// int main()
// {
//     unsigned int c, arr[3][3]={
//         {2,4,6},{9,1,10},{16,64,5}
//     };
//     printf("1=%d\n",**arr);
//     printf("2=%d\n",**arr<(*(*arr+2)));
//     // printf("3=%ld\n",*(arr+2)/(*(*arr+1)>**arr));
//     printf("4=%d\n",*(arr[1]+1)|arr[1][2]);
//     printf("5=%d\n",*(arr[2])|*(arr[0]));
//     printf("6=%d\n",arr[1][1]<arr[0][1]);
//     printf("7=%d\n",arr[2][1]&&arr[2][0]);
//     printf("8=%d\n",arr[2][2]|arr[0][1]);
//     printf("9=%d\n",arr[0][1]^arr[0][2]);
//    // c=(++(*arr)+(--arr[1][1]));
//     // printf("10=%d\n",c);
//     printf("%d\n%d\n",*arr,**arr);
//     return 0;
// }
//                                                      [C](e)
//                                          Program to find a square matrix is symmetric or not.
// void print(int p[][4],int n,int m){
//     printf("\n****************************\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d\t",p[i][j]);
//         }printf("\n");
//     }
//     printf("\n****************************\n");
// }
// int main()
// {
//     int m[4][4],t[4][4],i,j,c=0;
//     for ( i = 0; i < 4; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             printf("Enter element for row%d coloumn%d:",i+1,j+1);
//             scanf("%d",&m[i][j]);
//                         t[j][i]=m[i][j];
//         }
//     }
//     printf("\n********* Orignal Matrix ********\n");
//     print(m,4,4);
//     printf("\n********* Transpose of Matrix ********\n");
//     print(t,4,4);
//         for ( i = 0; i < 4; i++)
//         {
//             for ( j = 0; j < 4; j++)
//             {
//                 if (t[i][j]==m[i][j])
//                 {
//                     c++;
//                 }
//             }
//         }
//         if (c==i*j)
//         {
//             printf("The matrix entered is symmetric!\n");
//         }
//         else
//         {
//                printf("The matrix entered is not symmetric!");
//         }
//     return 0;
    
// }
//                                                          [C](g)
//                                  Program to multiply two 3x3 matrix

// void print(int *p,int m,int n){
//     printf("\n**************************\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t",*p++);
//         }
//         printf("\n");
//     }printf("\n**************************\n");
// }
// int main()
// {
//     int a[3][3],b[3][3],m[3][3];
//     printf("Enter First Matrix:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter Second Matrix:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {       m[i][j]=0;
//             for (int k = 0; k < 3; k++)
//             {
//                 m[i][j]=m[i][j]+a[i][k]*b[k][j];
//             }
//         }
//     }
//     printf("******** The Resultent Matrix ********\n");
//     print(*m,3,3);
//     return 0;
// }
//                      [C](h)-Program to shift 2 rows of a 4x5 Matrix
void shiftcoloumn(int *p[4][5],int n,int m){
    int ar[4][5];
    for (int i = 0; i < n; i++)
    {   for (int j = 0; j < m; j++)
        {
            if(j<3)
                {
                    ar[i][j]=p[i][j+2];
                }
            else
            {
                    ar[i][j]=p[i][j-3];
                }
        }    
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
            p[i][j]=ar[i][j];
        printf("%d\t",p[i][j]);
      }
      printf("\n");
    }
}
void shiftrow(int *p[4][5],int n,int m){
    int ar[4][5];
    for (int i = 0; i < n; i++)
    {   for (int j = 0; j < m; j++)
        {
            if(i<2)
                {
                    ar[i][j]=p[i+2][j];
                }
            else
            {
                    ar[i][j]=p[i-2][j];
                }
        }    
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
            p[i][j]=ar[i][j];
        printf("%d\t",p[i][j]);
      }
      printf("\n");
    }
    
}
int main()
{
    int p[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    shiftrow(p,4,5);
    return 0;   
}