#include <stdio.h>
void move(int *x, int n, int m);
int main(void)
{
    int i, m, n;
    int a[80];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter m:");
    scanf("%d", &m);
    printf("Enter array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    move(a, n, m);
    printf("After move: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void move(int *p, int n, int m)
{
    int i, j, k = 0, a[80];
    for (i = 0; i < n; i++)
    {
        if (i < n - m)
        {
            a[i + m] = p[i];
        }
        else
        {
            a[k++] = p[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        p[i] = a[i];
    }
}