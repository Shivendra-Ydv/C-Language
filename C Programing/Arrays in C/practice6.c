//                      Program-6(Program to find number of positive integers)
 #include<stdio.h>
// int counter(int *arr,int n){
//     int c=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>0){
//         c++; 
//         }
//     }
//     return c;
// }
// int main()
// {
//     int c,n;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Element %d:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
    
//     c=counter(arr,n);
//     printf("Numrber of Positive elements is %d",c);
//     return 0;
// }
//                                  Program to print table of 2,7,9 using a 3x10 array 
// int main()
// {
//     int arr[3][10];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            if(i==0){
//                 arr[i][j]=2*(j+1);
//                 printf("%dx%d=%d\n",2,j+1,arr[i][j]);
//            }
//            else if(i==1){
//                 arr[i][j]=7*(j+1);
//                 printf("%dx%d=%d\n",7,j+1,arr[i][j]);
//            }
//             else if(i==2){
//                 arr[i][j]=9*(j+1);
//                 printf("%dx%d=%d\n",9,j+1,arr[i][j]);
//             }
//         }
        
//     }
//     return 0;
// }
// void printable(int *arr,int ar,int m){ 
//         printf("Table of %d\n",ar);
//     for (int i = 0; i < m; i++)
//     { 
//          arr[i]=(ar)*(i+1);
//         printf("%dx%d=%d\n",ar,(i+1),arr[i]);
        
//     }
    
// }
// int main()
// {
//     int m,n;
//     printf("Enter the number of multiplication tables you wanna print:\n");
//     scanf("%d",&n);
//     printf("Enter the number of multiplicatons you want in a particular table:\n");
//     scanf("%d",&m);
//     int arr[n][m],ar;
//     for (int i = 0; i < n; i++)
//    {
//        printf("Enter the number for table\n");
//         scanf("%d",&ar);
//         printable(arr[i],ar,m);
//    }
  
//     return 0;
   
    

// }
//                             Program to print addresses of 3D array in increasing order
int main()
{
    int arr[2][3][4];
    for ( int i = 0; i < 2; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            for ( int k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
            }
            
        }
        
    }
    return 0;
}