#include <stdio.h>
int main(void)
{

    int a, i, n;

    long sn;

    long fn(int a, int n);
    scanf("%d%d", &a, &n);
    sn = 0;
    for (i = 1; i <= n; i++)
        sn = sn + fn(a, i);
    printf("%d\n", sn);

    return 0;
}

long fn(int a, int n)

{

    int i;
    long tn;
    tn = 0;
    for (i = 1; i <= n; i++)

        tn = 10 * tn + a;
    return tn;
}