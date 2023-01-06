#include <stdio.h>
int fib(int n);
int main(void)
{
    int i, m, n, f;
    printf("Enter m:");
    scanf("%d", &m);
    printf("Enter n");
    scanf("%d", &n);
    i = f = 1;
    while (f <= n)
    {
        if (f >= m)
        {
            printf("%d ", f);
        }
        i++;
        f = fib(i);
    }

    return 0;
}
int fib(int n)
{
    int i, x, x1, x2;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        x1 = x2 = 1;
        for (i = 3; i <= n; i++)
        {
            x = x1 + x2;
            x1 = x2;
            x2 = x;
        }
    }
    return x;
}