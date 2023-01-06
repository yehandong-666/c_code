#include <stdio.h> #include<string.h>
void strmcpy(char *s, char *t, int m);
int main(void)
{
    char s[80], t[80];
    int m;
    printf("Enter the string:");
    gets(t);
    printf("Enter m:");
    scanf("%d", &m);
    if (strlen(t) < m)
    {
        printf("Error Input");
        return 0;
    }
    else
    {
        strmcpy(s, t, m);
        puts(s);
    }
    return 0;
}
void strmcpy(char *s, char *t, int m)
{
    t = t + m - 1;
    while (*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
}