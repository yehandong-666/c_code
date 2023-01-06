#include <stdio.h>
int Ack(int m, int n);
int main(void)
{
    int m, n;
    int result;
    scanf("%d%d", &m, &n);
    result = Ack(m, n);
    printf("Ackerman(%d,%d)=%d\n", m, n, result);
    return 0;
}
int Ack(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0 && m > 0)
        return Ack(m - 1, 1);
    else if (m > 0 && n > 0)
        return Ack(m - 1, Ack(m, n - 1));
}
