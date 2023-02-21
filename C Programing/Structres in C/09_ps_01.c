#include<stdio.h>
typedef struct vector
{
    int a;
    int b;
}vec;

int main()
{
    vec v1,v2;
    v1.a=0334;//value of a is differing by adding 0 before it.
    v1.b=32;
    printf("A dim of v1 is %d and B dim of v2 is %d.\n",v1.a,v1.b);
    v2.a=34;
    v2.b= 320;
    printf("A dim of v2 is %d and B dim of v2 is %d.",v2.a,v2.b);
    // int n=03;
    // printf("\nN=%d",n);
return 0;
} 