#include <stdio.h>
int mirror(char *p);
int main(void)
{
    char s[80];
    printf("Enter the string:");
    gets(s);
    if (mirror(s) == 1)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}
int mirror(char *p)
{
    char *q;
    q = p;
    while (*q != '\0')
    {
        q++;
    }
    q--;
    while (p < q)
    {
        if (*p != *q)
        {
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}