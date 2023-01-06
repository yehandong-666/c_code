#include <stdio.h>
struct complex
{
    int real, im;
};
struct complex cmult(struct complex a, struct complex b);
int main(void)
{
    struct complex a = {3, 4}, b = {5, 6}, c;
    c = cmult(a, b);

    printf("(%d+%di)(%d+%di)=%d+%di\n", a.real, a.im, b.real, b.im, c.real, c.im);

    return 0;
}
struct complex cmult(struct complex a, struct complex b)
{
    struct complex c;

    c.real = a.real * b.real - a.im * b.im;
    c.im = a.real * b.im + a.im * b.real;

    return c;
}