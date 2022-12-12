#include<stdio.h>
int main()
{
    int c=1,i,a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        c=c*a[i];
    }
    printf("%dKB",c);
}