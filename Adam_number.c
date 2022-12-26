#include<stdio.h>
int main()
{
    int n,r=0,j,m=0;
    scanf("%d",&n);
    j=n; 
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n/=10;
    }
    int y,b=0,c=0;
    y=r*r;
    while(y!=0)
    {
        b=y%10;
        c=c*10+b;
        y/=10;
    }
    int g,i=0,k=0;
    g=j*j;
    /*while(j!=0)
    {
        i=g%10;
        k=k*10+i;
        a/=10;
    }*/
    if(c==g)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}