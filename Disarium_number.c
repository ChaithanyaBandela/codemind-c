#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,sum=0,rem=0;
    scanf("%d",&a);
    i=a;
    while(i>0)
    {
        sum=sum+1;
        i=i/10;
    }
    i=a;
    while(i>0)
    {
        rem=rem+pow(i%10,sum);
        i=i/10;
        sum--;
    }
    if(rem==a)
    printf("True");
    else
    printf("False");
}