#include<stdio.h>
int main(void)
{
    double x,y;
    printf("Enter x:\n");
    scanf("%lf",&x);

    if (x!=0)
    {
        y=1.0/x;
    }
    else
    {
         y=0;
    }
    printf("f(%.2f)=%.1f\n",x,y);

    return 0;
}