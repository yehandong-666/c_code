#include <stdio.h>
#include <math.h>
double f1(double a, double b, double c)
{
    return (a + b + c) / 2;
}
double f2(double s, double a, double b, double c)
{
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main(void)
{
    double a, b, c, s;
    printf("input a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    s = f1(a, b, c);
    printf("s = %lf, area = %lf\n", s, f2(s, a, b, c));
    return 0;
}