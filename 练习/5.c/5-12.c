#include <stdio.h>
int sum(int m, int n);
int main(void)
{
    int m, n;

    printf("Enter m and n:");
    scanf("%d%d", &m, &n);

    printf("sum=%d\n", sum(m, n));

    return 0;
}
int sum(int m, int n)
{
    int i, result = 0;
    for (i = m; i <= n; i++)
    {
        result += i;
    }
    return result;
}