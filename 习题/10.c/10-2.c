#include <stdio.h>
double fact(int n);
int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("1~%d的阶乘和:%.0lf", n, fact(n));
    return 0;
}
double fact(int n)
{
    int i;
    double result = 1;
    if (n == 1)
        result = 1;
    else
    {
        for (i = 1; i <= n; i++)
            result = result * i;
        result = result + fact(n - 1);
    }
    return result;
}