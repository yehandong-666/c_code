#include <stdio.h>
char *strcat(char *s, char *t);
int main(void)
{
    int n, i = 0, j;
    char s[80], t[80];
    printf("Enter first string:");
    gets(s);
    printf("Enter second string:");
    gets(t);
    printf("%s", strcat(s, t));
    return 0;
}
char *strcat(char *s, char *t)
{
    int i, j = 0;
    for (i = sizeof(s) / 2; i <= sizeof(s) / 2 + sizeof(t) / 2; i++, j++)
        *(s + i) = *(t + j);
    *(s + i - 1) = '\0';
    return s;
}