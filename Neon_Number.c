#include<stdio.h>
int main()
{
    int a,i,sum=0,rem;
    scanf("%d",&a);
    i=a*a;
    while(i!=0)
    {
        rem=i%10;
        sum=sum+rem;
        i=i/10;
    }
    if(sum==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}