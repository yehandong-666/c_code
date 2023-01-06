#include <stdio.h>
int main(void)
{
    int i;
    char ch, str[80];
    printf("Enter a string:");
    i = 0;
    while ((ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }
    str[i] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'A' + 'Z' - str[i];
        }
    }
    printf("After replaced:");
    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    putchar("\n");
    return 0;
}