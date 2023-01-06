#include <stdio.h>
int main(void)
{
    int i, j, m, n, sum;
    int a[6][6];
    printf("Enter m:");
    scanf("%d", &m);
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("sum of row %d is %d\n", i, sum);
    }
    return 0;
}