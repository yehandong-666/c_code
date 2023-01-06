#include <stdio.h>
#include <string.h>
int main()
{
    int i, ri, repeat;
    char *date[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"},str[80];
    printf("Enter the string:");
    scanf("%s", str);
    for (i = 0; i < 7; i++)
    {
        if (strcmp(date[i], str) == 0)
        {
            printf("%d\n", i);
            break;
        }
        else
            printf("%d\n", -1);
    }

    return 0;
}