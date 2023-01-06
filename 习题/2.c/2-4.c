#include <stdio.h>
int main(void)
{
    int n, flag = 1, numerator = 1, denominator=1,i;

    double sum = 0;

    printf("Enter n:\n");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += flag * (numerator*1.0 / denominator);
 
        flag = -flag;

        numerator += 1;

        denominator += 2;
    }

    printf("%.2f\n", sum);

    return 0;
}