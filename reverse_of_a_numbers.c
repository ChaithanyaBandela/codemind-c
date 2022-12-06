#include<stdio.h>
int main()
{
    int a,i,c=0,d;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        d=i%10;
        c=(c*10)+d;
        i=i/10;
    }
    printf("%d",c);
}