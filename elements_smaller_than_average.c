#include<stdio.h>
int main()
{
    int n,s=0,c=0,i,avg;
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
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
    
}