#include<stdio.h>
typedef struct vector
{
    int a;
    int b;
}vec;
vec sumvector(vec x,vec y){
    vec result;
    result.a =x.a+y.a;
    result.b =x.b+y.b;
    return(result);
}
int main()
{
    vec v1,v2,res;
    v1.a=34;
    v1.b=32;
    v2.a=34;
    v2.b= 32;
    res=sumvector(v1,v2);
    printf("A dim of result is %d and B dim of result is %d. ",res.a,res.b);
return 0;
} 