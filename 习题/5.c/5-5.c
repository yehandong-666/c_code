#include <stdio.h>
int countdigit(int number, int digit);
int main(void)
{
    int number, digit;
    printf("Enter a integer:");
    scanf("%d", &number);
    printf("Number of digit:");
    scanf("%d", &digit);
    printf(":%d", countdigit(number, digit));

    return 0;
}
int countdigit(int number, int digit)
{
    int count;
    if (number < 0)
    {
        number = -number;
    }
    while (number > 0)
    {
        if (number % 10 == digit)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}