#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int i,rem,rev=0;
        i=a;
        while(a>0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(rev==i)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}