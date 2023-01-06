#include <stdio.h>
int even(int n);
int main(void)
{
    int n, sum;
    sum = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        if (even(n) == 0)
        {
            sum += n;
        }
        scanf("%d", &n);
    }
    printf("The number of the odd numbers is %d\n", sum);

    return 0;
}
int even(int n)
{
    int y;
    if (n % 2 == 0)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    return y;
}