#include <stdio.h>

int Palindrome(int n)
{
    int sum = 0,i;
    i = n;

    while (n > 0)
    {
        int remainder = n% 10;
        sum = sum * 10 + remainder;
        n=n/10;
    }

    if (i==sum)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (Palindrome(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
