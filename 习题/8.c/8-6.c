#include <stdio.h>
void delchar(char *s, char c);
int main(void)
{
    char c;
    char s[80];
    printf("Enter the string:");
    gets(s);
    printf("Enter a ch:");
    scanf("%c", &c);
    delchar(s, c);
    printf("result: ");
    puts(s);
    return 0;
}
void delchar(char *s, char c)
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}