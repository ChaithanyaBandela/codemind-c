#include<stdio.h>
int main()
{
    int s,t,b,bytes,tc;
    scanf("%d%d%d",&s,&t,&b);
    bytes=2*s*b*t*512;
    tc=bytes/1024;
    printf("%d KB",tc);
}