#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, i;
    float *p, sum, max, min, avg;
    printf("Enter students'number n: ");
    scanf("%d", &n);
    if ((p = (float *)calloc(n, sizeof(float))) == NULL)
    {
        printf("Not able to allocate memory. \n");
        exit(1);
    }
    sum = 0.0;
    max = -1;
    min = 1000;
    printf("Enter %d students'scores: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", p + i);
        sum = sum + *(p + i);
        if (min > *(p + i))
        {
            min = *(p + i);
        }
        if (max < *(p + i))
        {
            max = *(p + i);
        }
    }
    avg = sum / n;
    printf("The avg is %f,max is %f,min is %f\n", avg, max, min);
    free(p);
    return 0;
}