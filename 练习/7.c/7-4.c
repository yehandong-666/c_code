#include <stdio.h>
int main(void)
{

    int i, j, k, m, n, flag, equal;
    int a[10], b[10], c[10];

    printf("Enter m:");

    scanf("%d", &m);

    printf("Enter %d integers:", m);

    for (i = 0; i < m; i++)

        scanf("%d", &a[i]);

    printf("Enter n:");

    scanf("%d", &n);

    printf("Enter %d integers:", n);
    for (j = 0; j < n; j++)
        scanf("%d", &b[j]);

    k = 0;

    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
            if (a[i] == a[j])

                flag = 1; // 判断一个数组中是否有相重的元素，有的话不执行

        if (!flag)
        {

            equal = 0;
            for (j = 0; j < n; j++)
                if (a[i] == b[j])
                {

                    equal = 1;
                    break;
                }

            if (!equal)

                c[k++] = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
            if (b[i] == b[j])

                flag = 1;

        if (!flag)
        {

            equal = 0;
            for (j = 0; j < m; j++)
                if (b[i] == a[j])
                {

                    equal = 1;
                    break;
                }

            if (!equal)

                c[k++] = b[i];
        }
    }

    printf("%d", c[0]);
    for (i = 1; i < k; i++)
        printf(" %d", c[i]);
    printf("\n");

    return 0;
}