#include <stdio.h>
double max(double a, double b);
int main(void)
{
    double a, b;

    printf("Enter a and b:");
    scanf("%lf%lf", &a, &b);

    printf("max=%lf\n", max(a, b));

    return 0;
}
double max(double a, double b)
{ 
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}