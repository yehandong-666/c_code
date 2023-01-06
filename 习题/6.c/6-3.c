#include <stdio.h>
int factorsum(int number);
int main(void)
{
    int m, n;
    printf("Input m:");
    scanf("%d", &m);
    printf("Input n:"); 
    scanf("%d", &n);
    printf(" 完全数是： ");
    for (; m <= n; m++)
        if (factorsum(m) == 1)
            printf("%d ", m);

    return 0;
}
int factorsum(int number)
{

    int i, sum;

    if (number == 1)
        return 1;
    sum = 0;
    for (i = 1; i <= number / 2; i++)
        if (number % i == 0)

            sum = sum + i;
    if (sum == number)
        return 1;

    return 0;
}