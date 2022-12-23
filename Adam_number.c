#include<stdio.h>
int main()
{
    int a,b,i,c=0,d,e,j,g=0,h;
    scanf("%d",&a);
    b=a*a;
    for(i=a;i>0;)
    {
        d=i%10;
        c=(c*10)+d;
        i=i/10;
    }
    e=c*c;
    for(j=e;j>0;)
    {
        h=j%10;
        g=(g*10)+h;
        j=j/10;
    }
    if(g==b)
    printf("True");
    else
    printf("False");
}