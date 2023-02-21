#include<stdio.h>
//                              Ex-[A]-(a)
// int main()
// {
//     char c[2]="A";
//     printf("%c\n",c[0]);
//     printf("%s\n",c);
//     return 0;
// }
//                                      (b)
// int main()
// {
//     char s[]="Get organised! Learn C!!";
//     printf("%s\n",&s[2]);
//     printf("%s\n",s);
//     printf("%s\n",&s);
//     printf("%c\n",s[2]);
//     return 0;
// }
//                                                  (c)
// int main()
// {
//     char s[]="No two viruses work similarly";
//     int i=0;
//     while (s[i]!=0)
//     {
//         printf("%c %c\n",s[i],*(s+i));
//         printf("%c %c\n",i[s],*(i+s));
//         i++;
//     }
//     return 0;
// }
//                                                      (d)
// int main()
// {
//     char str1[]={'H','e','l','l','o',0};
//     char str2[]="Hello";
//     printf("%s\n",str1);
//     printf("%s\n",str2);
//     return 0;
// }
//                                                          (e)
// int main()
// {
//     printf(5+"Good Morning");
//     printf("%c\n","abcdefgh"[4]);
//     return 0;
// }
//                                                              (f)
int main()
{   char a[]={'a','b'};
    printf("%d\n",sizeof(a));
    printf("%d %d %d\n",sizeof('3'),sizeof("3"),sizeof(3));
    return 0;
}