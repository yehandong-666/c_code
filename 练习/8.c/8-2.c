#include <stdio.h>
void sum_diff(float op1, float op2, float *psum, float *pdiff);
int main(void)
{
    float op1, op2, sum, diff;
    printf("Enter op1 and op2:");
    scanf("%f%f", &op1, &op2);
    sum_diff(op1, op2, &sum, &diff);
    printf("%f+%f=%f;%f-%f=%f\n", op1, op2, sum, op1, op2, diff);
    return 0;
}
void sum_diff(float op1, float op2, float *psum, float *pdiff)
{
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}