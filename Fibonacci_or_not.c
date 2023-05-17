#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,d=0,n;
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