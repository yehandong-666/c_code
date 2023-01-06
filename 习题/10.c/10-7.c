#include <stdio.h>
int dectobini(int n);
int main(void)
{
    int n;
    printf("Enter n(十进制整数 ):");
    scanf("%d", &n);
    printf("输出二进制:%d", dectobini(n));
    return 0;
}
int dectobini(int n)
{
    int result;
    if (n == 0)
        result = 0;
    else
        result = dectobini(n / 2) * 10 + n % 2;
    return result;
}