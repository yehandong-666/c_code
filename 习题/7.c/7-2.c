#include <stdio.h>
int main(void)
{
    int g, i, j, k, n, max;
    int a[1000], b[1000], count[1000];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d integers:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        count[i] = 0;
    for (i = 0; i <= 9; i++)
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
                b[k] = a[k];
            while (a[j] != 0)
            {
                if (a[j] % 10 == i)
                    count[i]++;
                a[j] = a[j] / 10;
            }
            for (k = 0; k < n; k++)
                a[k] = b[k];
        }
    max = count[0];
    for (i = 0; i <= 9; i++)
        if (max < count[i])
            max = count[i];
    printf(" 出现最多次数的数字和次数是：	");
    for (i = 0; i <= 9; i++)
        if (max == count[i])
            printf("%2d-%d", i, count[i]);
    return 0;
}
