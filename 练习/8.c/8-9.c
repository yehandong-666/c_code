#include <stdio.h>
#include <stdlib.h>
void bubble(int a[], int n);
int main(void)
{
    int n, j, *a, i, temp;
    printf("Enter n(n<=8):");
    scanf("%d", &n);
    if ((a = (int *)calloc(n, sizeof(int))) == NULL)
    {
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    printf("Ente a[%d]:", n);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    bubble(a, n);
    printf("After sorted,a[%d]=", n);
    for (i = 0; i < n; i++)
        printf("%3d", *(a + i));
    free(a);

    return 0;
}
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
}