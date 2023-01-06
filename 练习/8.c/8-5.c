#include <stdio.h>
void bubble(int a[], int n);
int main(void)
{
    int i, n, a[8];
    printf("Enter n (n<=8): ");
    scanf("%d", &n);
    printf("Enter a[%d] :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble(a, n);
    printf("After sorted, a[%d]=", n);
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);

    return 0;
}
void bubble(int a[], int n)
{
    int i, j, temp, index;

    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[index])
                index = j;
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}