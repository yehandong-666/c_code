#include <stdio.h>
#include <math.h>
#define S(a, b, c) ((a) + (b) + (c)) / 2
#define AREA(s, a, b, c) sqrt((s) * ((s) - (a)) * ((s) - (b)) * ((s) - (c)))
int main(void)
{
    double a, b, c, s;
    printf("input a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    s = S(a, b, c);
    printf("s = %lf, area = %lf\n", s, AREA(s, a, b, c));
    return 0;
}