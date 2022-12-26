#include<stdio.h>
int main()
{
    int n,a,b,c=0,s=0;
    scanf("%d",&n);
    if(n%5==0 && n%10!=0)
    {
        a=n%10;
        if(a==5)
        {
            c++;
        }
        b=n/10;
        s=b+c;
        printf("%d",s);
    }
    else if(n%5==0&&n%10==0)
    {
        n=n/10;
        printf("%d",n);
    }
    else
    {
        printf("-1");
    }
}