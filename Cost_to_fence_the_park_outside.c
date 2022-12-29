#include<stdio.h>
int main()
{
    int l,b,w,d,co,f;
    scanf("%d%d%d%d",&l,&b,&w,&d);
    f=((l+(2*w))*(b+(2*w))-(l*b));
    co=f*d;
    printf("%d",co);
}