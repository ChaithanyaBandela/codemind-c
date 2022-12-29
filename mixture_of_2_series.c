#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,y=0,i;
    scanf("%d",&n);
    //printf("0 0 ");
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
          printf("%d ",x);
          x=x+2;
        }
        else
        {
            printf("%d ",y);
            y=y+1;
        }
    }
}