#include<stdio.h>
int main()
{
    int a,b,s1,d1;
    scanf("%d%d",&a,&b);
    float c,d,s2,d2;
    scanf("%f%f",&c,&d);
    s1=a+b;
    d1=a-b;
    printf("%d %d
",s1,d1);
    s2=c+d;
    d2=c-d;
    printf("%.1f %.1f",s2,d2);
}