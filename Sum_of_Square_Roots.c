#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float n,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=sqrt(i);
        sum=sum+n;
    }
    printf("%0.2f",sum);
}