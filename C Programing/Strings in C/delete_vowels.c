//                                                  (b)-deleting vowels from a sentance
 #include<stdio.h>
 #include<string.h> 
 int main()
 {
     char a[80];
    //  {
        //  "Hello,how are you!"
    //  };
    printf("Enter the sentance:\n");
     gets(a);
     int n;
     n=strlen(a);
    for (int i = 0; i<n; i++)
    {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            for (int j = i; j < n; j++)
            {
                a[j]=a[j+1];
            }  
            i--;
        }
    }
    printf("%s",a);
    return 0;
 }