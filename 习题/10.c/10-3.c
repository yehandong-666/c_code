#include <stdio.h>
double power(double x, int n);
int main(void)
{
    double x;
    int n;
    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter n:");
    scanf("%d", &n);
    printf("%lf的%d次方=%lf", x, n, power(x, n));
    return 0;
}
double power(double x, int n)
{
    double result;
    if (n == 1)
        result = x;
    else
        result = x * power(x, (n - 1));
    return result;
}