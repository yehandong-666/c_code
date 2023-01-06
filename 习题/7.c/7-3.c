#include <stdio.h>
int main(void)
{
    int i, j, n, flag;
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
    for (j = 1; j < n; j++)
    { 
        flag = 0;
        for (i = 1; i < j; i++)
        {
            if (a[i][j] == 0)
            {
                flag = 1;
            }
        }
    }
    if (flag)
    {
        printf("YES!\n");
    }
    else
    {
        printf("NO!\n");
    }
    return 0;
}