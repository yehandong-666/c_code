#include <stdio.h>
int sign(int x);
int main(void)
{
    int x, y;

    printf("Enter x:");
    scanf("%d", &x);

    printf("f(x)=%d\n", sign(x));

    return 0;
}
int sign(int x)
{
    int y;
    if (x > 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    return y;
}