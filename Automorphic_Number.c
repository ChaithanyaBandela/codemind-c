#include<stdio.h>
int main()
{
    int i,sqr,sum=1,a;
    scanf("%d",&a);
    i=a;
    sqr=a*a;
    while(a!=0)
    {
        sum=sum*10;
        a=a/10;
    }
    if(sqr%sum==i)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}