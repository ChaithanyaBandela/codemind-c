#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    printf("%0.2f
",pf);
    gs=bs+hra+da+pf;
    printf("%0.2f
",gs);
}