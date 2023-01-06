#include <stdio.h>
long fib(int n);
int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("fib(%d)=%ld\n", n, fib(n));
    return 0;
}
long fib(int n)
{
    long res;
    if (n == 0)
        res = 0;
    else if (n == 1)
        res = 1;
    else
        res = fib(n - 2) + fib(n - 1);
    return res;
}