#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=a/1000;
    if(b>c&&b>d&&b>e)
    printf("%d",b);
    else if(c>d&&c>e&&c>b)
    printf("%d",c);
    else if(d>b&&d>c&&d>e)
    printf("%d",d);
    else
    printf("%d",e);
}