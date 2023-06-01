#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=a/1000;
    if(e==6)
    {
        e=9;
    }
    else if(d==6)
    {
        d=9;
    }
    else if(c==6)
    {
        c=9;
    }
    else if(b==6)
    {
        b=9;
    }
    printf("%d%d%d%d",e,d,c,b);
}