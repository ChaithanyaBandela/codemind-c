#include<stdio.h>
int main()
{
    int l,m,k;
    scanf("%d%d%d",&l,&m,&k);
    if(l<=m*k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}