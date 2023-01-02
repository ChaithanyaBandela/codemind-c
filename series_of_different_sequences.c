#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,y=0,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            a=pow(3,x)+2;
            printf("%d ",a);
            x++;
        }
        else
        {
            b=pow(5,y)-3;
            printf("%d ",b);
            y++;
        }
    }
}