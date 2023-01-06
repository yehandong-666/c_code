#include<stdio.h>
#include<math.h>
int main(void)
{
    double x,y;

    printf("Enter x:\n");

    scanf("%lf",&x);

    if (x<=0)
    {
        y=pow(x+1,2)+2*x+1.0/x;
    }
    else
    {
        y=sqrt(x);
    }
    printf("y=f(%.0f)=%.2f\n",x,y);   

    return 0;
}