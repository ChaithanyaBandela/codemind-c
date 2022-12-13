#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            d++;
            break;
        }
        a=b;
        b=c;
    }
    if(d==0)
    {
    printf("False");
    }
    else
    {
    printf("True");
    }
}