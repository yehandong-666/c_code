#include <stdio.h>
int main(void)
{
    int i;
    int x, min;
 
    scanf("%d", &x); 
    min = x;
    for (i = 1; i < 5; i++)
    {
        scanf("%d", &x);
        if (x < min)
        {
            min = x;
        }
    }
    printf("min is %d\n", min);

    return 0;
}