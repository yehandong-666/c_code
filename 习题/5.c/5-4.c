#include <stdio.h>
int prime(int m);
int main(void)
{
    int a, m, n, sum, count;
    printf("Enter m:");
    scanf("%d", &m);
    printf("Enter n:");
    scanf("%d", &n);
    sum = 0;
    count = 0;
    a = m;
    for (; m <= n; m++)
    {
        if (prime(m) == 1)
        {
            sum += m;
            count++;
        }
    }
    m = a;
    printf("%d和%d之间的素数的个数:%d\n", m, n, count);
    printf("%d和%d之间的素数的和:%d\n", m, n, sum);

    return 0;
}
int prime(int m)
{
    int i;
    for (i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    if (m > 1)
    {
        return 1;
    }
}