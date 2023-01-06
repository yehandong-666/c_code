#include <stdio.h>
int main(void)
{
    int i;
    char str[80];
    printf("Enter a string:");
    i = 0;
    while ((str[i] = getchar()) != '\n')

        i++;

    str[i] = '\0';
    for (; i >= 0; i--)

        putchar(str[i]);

    return 0;
}