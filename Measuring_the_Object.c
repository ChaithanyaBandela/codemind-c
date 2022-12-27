#include<stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d%d%d%d",&w,&y,&z,&x);
    if(w==x||w==y||w==z||w==x+y||w==y+z||w==x+z)
    printf("YES");
    else
    printf("NO");
}