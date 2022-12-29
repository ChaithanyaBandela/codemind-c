#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,y=2,i,a,b;
    scanf("%d",&n);
    printf("2 0 ");
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
          a=pow(3,x);
          printf("%d ",a);
          x++;
        }
        else
        {
            b=pow(2,y);
            printf("%d ",b);
            y++;
        }
    }
}