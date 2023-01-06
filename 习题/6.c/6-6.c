#include <stdio.h>
int reverse(int number);
int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("逆序数是%d", reverse(n));

    return 0;
}
int reverse(int number)
{
    int res, a;
    while (number != 0)
    {
        a = number;
        number %= 10;
        res = res * 10 + number;
        number = a / 10;
    }
    return res;
}