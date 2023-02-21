// Deleting the word "The" from the sentance
#include<stdio.h>
#include<string.h> 
//  int main()
//  {
//      char a[80];
//     printf("Enter the sentance:\n");
//      gets(a);
//      int n;
//      n=strlen(a);
//     for (int i = 0; i<n; i++)
//     {
//         if ((a[i]=='t'||a[i]=='T')&&(a[i+1]=='h'||a[i+1]=='H')&&(a[i+2]=='e'||a[i+2]=='E'))
//         {
//             for (int j = i; j < n; j++)
//             {
//                 a[j]=a[j+3];
//             }  
//         }
//     }
//     printf("%s",a);
//     return 0;
// }
//      to count the occurence of any two successive vowels
 int main()
 {  int c=0;
     char a[80]=
     {
         "Please read this application and give me gratuity"
     };
    // printf("Enter the sentance:\n");
    //  gets(a);
     int n;
     n=strlen(a);
    for (int i = 0; i<n; i++)
    {
        if ((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='A'||a[i+1]=='E'||a[i+1]=='I'||a[i+1]=='O'||a[i+1]=='U'))
        {     c++;
            //  printf("%d\t%c\n",i,a[i]);
        }
    }
    printf("The number of occurence of any two successive vowels is %d.",c);
    return 0;
 }