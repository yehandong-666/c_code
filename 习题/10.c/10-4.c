#include <stdio.h>
#include <math.h>
double f(double x, int n);
int main(void)
{
    int n;
    double x;
    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter n:");
    scanf("%d", &n);
    printf("f(%lf,%d)=%lf\n", x, n, f(x, n));
    return 0;
}
double f(double x, int n)
{
    if (n == 1)
        return x;
    else
        return pow(-1, n - 1) * pow(x, n) + f(x, n - 1);
}