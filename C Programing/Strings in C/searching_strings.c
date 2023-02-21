//                      To search a string in an array
#include<stdio.h>
#include<string.h>
int main()
{   int s;
    char *str[]={
                "Ram","Shyam","Shiva","Mangal"
                };
    char str1[20];
    printf("Enter the string to be searched:");
    scanf("%s",str1);
    for (int i = 0; i < 4; i++)
    {   s=strcmp(str[i],str1);
     if (s==0)
        {
            printf("%s found in the array!",str1);
            break;
        } 
    }
    if(s!=0)
    {
         printf("%s not found in the array!",str1);
    }
    
return 0;
}