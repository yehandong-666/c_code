#include <stdio.h>
int prime(int m);
int main(void)
{

    int count, i, number;

    count = 0;
    for (number = 6; number <= 100; number = number + 2)
    {
        for (i = 3; i <= number / 2; i = i + 2)

            if (prime(i) && prime(number - i))
            {
                printf("%d=%d+%d    ", number, i, number - i);

                count++;

                if (count % 5 == 0)
                    printf("\n"); 
            }
    }

    return 0;
}

int prime(int m)

{

    int k, i;

    for (i = 2; i <= m / 2; i++)
        if (m % i == 0)
            return 0;
    if (i > m / 2 && m != 1)
        return 1;
}