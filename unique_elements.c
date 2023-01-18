#include<stdio.h>
 
int main()
{
 int a[100], n, i, j;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for(i = 0; i < n; i++) 
 {
  for (j=0; j<i; j++)
  {
      if (a[i] == a[j])
       break;
       }
      
     if (i == j)
     {
      printf("%d ", a[i]);
  }
 }
}