#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=1,y=1,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
          a=(pow(2,x))-1;
          printf("%d ",a);
          x++;
        }
        else
        {
            b=(pow(3,y))-1;
            printf("%d ",b);
            y++;
        }
    }
}