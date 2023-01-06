#include <stdio.h>
int main(void)
{
    char s[80], *p;
    int blank, digit, lower, other, upper;
    printf("Enter the string:");
    gets(s);
    upper = lower = blank = digit = other = 0;
    for (p = s; *p != '\0'; p++)
    {
        if (*p >= 'A' && *p <= 'Z')
            upper++;
        else if (*p >= 'a' && *p <= 'z')
            lower++;
        else if (*p >= '0' && *p <= '9')
            digit++;
        else if (*p == ' ')
            blank++;
        else
            other++;
    }
    printf("upper: %d\nlower: %d\nblank: %d\ndigit: %d\nother: %d\n", upper, lower, blank, digit, other);

    return 0;
}