#include <stdio.h>
#include <string.h>
void fsort(char **ch, int n);
int main(void)
{
    int i;
    char *pcolor[] = {"red", "blue", "yellow", "green", "black"};
    char **ch;
    ch = pcolor;
    fsort(ch, 5);
    for (i = 0; i < 5; i++)
        printf("%s ", *(ch + i));
    return 0;
}
void fsort(char **ch, int n)
{
    int k, j;
    char *temp;
    for (k = 1; k < n; k++)
        for (j = 0; j < n - k; j++)
            if (strcmp(*(ch + j), *(ch + j + 1)) > 0)
            {
                temp = *(ch + j);
                *(ch + j) = *(ch + j + 1);

                *(ch + j + 1) = temp;
            }
}