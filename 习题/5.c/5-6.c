#include <stdio.h>
int PPDI(int number);
int main(void)
{
    int i, m, n;
    printf("Enter m and n:");
    scanf("%d%d", &m, &n);
    printf("result:\n");
    for (i = m; i <= n; i++)
    {
        if (PPDI(i) != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
int PPDI(int number)
{
    int digit, temp, sum;
    temp = number;
    sum = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        temp /= 10;
        sum += digit * digit * digit;
    }

    return sum == number;
}
