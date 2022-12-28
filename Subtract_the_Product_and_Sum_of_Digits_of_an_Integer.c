#include<stdio.h>
int main()
{
    int a,b,i,s=0,m=1,t;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        s=s+b;
        m=m*b;
        i=i/10;
    }
    t=m-s;
    printf("%d",t);
}