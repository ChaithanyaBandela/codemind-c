#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=a;i>0;i++)
    {
        if(i%4==0)
        {
            b=i/4;
            printf("%d",b);
            break;
        }
    }
}