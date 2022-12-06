#include<stdio.h>
int main()
{
    int n,i,d,e=0,f=1,g;
    scanf("%d",&n);
    for(i=n;i>0;)
    {
       d=i%10;
       e=e+d;
       f=f*d;
       i=i/10;
    }
    g=f-e;
    printf("%d",g);
}