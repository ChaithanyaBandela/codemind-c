#include<stdio.h>
int main()
{
    int i,sum=0,rem,a;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        rem=a%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    printf("True");
    else
    printf("False");
}