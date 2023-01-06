#include <stdio.h>
#include <string.h>
#define MAXLINE 100
int main(void)
{
    char line[MAXLINE], str[4];
    int i;

    printf("Enter the string:");
    gets(line);
    if (strlen(line) < 3)
    {
        printf("	字符串长度小于 3，不符合要求！ \n");
    }
    for (i = 0; i < 3; i++)
        str[i] = line[i];
    str[i] = '\0';
    for (i = 3; line[i] != '\0'; i++)
        line[i - 3] = line[i];
    line[i - 3] = '\0';
    strcat(line, str);
    printf("%s%s\n", "After changing: ", line);

    return 0;
}