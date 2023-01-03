#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Units Consumed: %d
",a);
    float b,c,d,tot;
    if(a<=199)
    {
    c=1.20;
    b=a*c;
    }
    else if(a>=200&&a<400)
    {
    c=1.40;
    b=a*c;
    }
    else if(a>=400&&a<600)
    {
    c=1.60;
    b=a*c;
    }
    else if(a>=600&&a<800)
    {
    c=1.80;
    b=a*c;
    }
    else
    {
    c=2.00;
    b=a*c;
    }
    printf("Cost per Unit: %0.2f
",c);
    printf("Bill: %0.2f
",b);
    {
        if(a>400)
        {
        d=b*0.15;
        printf("Surcharge: %0.2f
",d);
        }
        else
        {
            d=0;
            printf("Surcharge: %0.2f
",d);
        }
    }
    tot=b+d;
    printf("Total Amount: %0.2f
",tot);
}