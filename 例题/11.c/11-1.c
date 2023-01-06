#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char *color[5] = {"red", "blue", "yellow", "green", "black"};
    char str[20];
    printf("Enter a color:");
    scanf("%s", str);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(str, color[i]) == 0)
        {
            break;
        }
    }
    if (i < 5)
    {
        printf("position:%d\n", i + 1);
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}