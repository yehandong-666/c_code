#include <stdio.h>
#include <math.h>
int isPrime(int x)
{
    int i;

    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
           return 0;
        }
    }   
 
    return 1;
   
}

int main(void)
{
    int i, count = 0;
    for (i = 2; i <=100; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%5d", i);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}