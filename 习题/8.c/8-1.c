#include <stdio.h>
void splitfloat(float x, int *intpart, float *fracpart);
int main(void)
{
    int intpart;
    float x, fracpart;
    printf("Enter a number:");
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The intpart is: %d\n", intpart);
    printf("The fracpart is: %f\n", fracpart);

    return 0;
}
void splitfloat(float x, int *intpart, float *fracpart)
{
    *intpart = (int)x;
    *fracpart = x - *intpart;
}