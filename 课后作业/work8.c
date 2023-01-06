#include <stdio.h>
int main(void)
{
    int i, n;
    double product, e;

    printf("Enter n:");
    scanf("%d", &n);

    product = 1;
    e = 1;
    for (i = 1; i <= n; i++)
    {
        product = product * i;
        e = e + 1.0 / product;
    }
    printf("%lf", e);

    return 0;
}