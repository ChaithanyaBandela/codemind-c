#include<stdio.h>
int main()
{
    int a[20],i,b;
    for(i=1;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<20;i++)
    {
        if(a[i]!=-1)
        {
            b=a[i]*a[i];
            printf("%d
",b);
        }
        else
        {
            break;
        }
    }
}