#include<stdio.h>
int main()
{
   int i, rem, c, temp, m, n;
   scanf("%d%d",&m,&n);
   for(i=m;i<=n;i++)
   {
      temp=i;
      c=0;
      while(temp)
      {
         rem=temp%10;
         temp=temp/10;
         c=c*10+rem;
      }
      if(i==c)
         printf("%d ",i);
   }
}