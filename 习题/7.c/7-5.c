#include <stdio.h>
int main(void)
{
    int i, j, k, n, row, col, flag;
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
    for (i = 0; i < n; i++)
    {
        flag = 1;
        col = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i][col] < a[i][j])
            {
                col = j;
            }
        }
        for (k = 0; k < n; k++)
        {
            if (a[i][col] > a[k][col])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            row = i;
            break;
        }
    }
    if (flag)
    {
        printf("a[%d][%d]=%d\n", row, col, a[row][col]);
    }
    else
    {
        printf("NO");
    }
    return 0;
}