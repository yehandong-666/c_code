#include <stdio.h>
#include <math.h>
int fun(int n);
int main(void)
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    printf("total=%d\n", fun(n));
    return 0;
}
int fun(int n)
{
    int i, d = 0;
    for (i = 101; i <= n; i++)
        if (((int)sqrt(i) * (int)sqrt(i)) == i)
        {
            if (i / 100 == (i / 10) % 10 || i / 100 == i % 10 || (i / 10) % 10 == i % 10)
                d++;
        }
    return d;
}
