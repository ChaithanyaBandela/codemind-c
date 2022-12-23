#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        c=(c*10)+b;
        i=i/10;
    }
    if(a==c)
    {
        printf("True");
    }
    else
    printf("False");
}