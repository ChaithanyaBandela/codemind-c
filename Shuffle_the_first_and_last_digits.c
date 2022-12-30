#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,s;
    scanf("%d",&n);
    d=log10(n)+1;
    a=n%10;
    b=n/pow(10,d-1);
    c=n-(b*pow(10,d-1)+a);
    s=a*pow(10,d-1)+b+c;
    printf("%d",s);
}