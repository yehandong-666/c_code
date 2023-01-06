#include <stdio.h>
int main(void)
{
    int i, j, n, sum;
    int a[6][6];

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != n - 1 && j != n - 1 && i + j != n - 1)
            {
                sum += a[i][j];
            }
        }
    }
    printf("sum=%d\n", sum);

    return 0;
}