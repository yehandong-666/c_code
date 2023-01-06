#include <stdio.h>
int main(void)
{
    int i, j, m, n, count;
    int a[6][6], b[6][6];
    printf("Enter m:");
    scanf("%d", &m);
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
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (j < n - m)
            {
                b[i][j + m] = a[i][j];
            }
            else
            {
                b[i][count++] = a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}