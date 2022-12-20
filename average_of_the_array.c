#include<stdio.h>
int main()
{
    int n,i;
    float s=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    t=s/n;
    printf("%.2f",t);
}