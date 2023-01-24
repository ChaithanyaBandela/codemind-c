#include<stdio.h>
int sum(int n)
{
    int b,s=0,i;
    for(i=n;i>0;)
    {
        b=i%10;
        s=s+b;
        i=i/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=sum(n);
    while(x>9)
    {
        x=sum(x);
        if(x>9)
        {
        continue;
        }
        else
        {
            break;
        }
    }
    printf("%d",x);
}