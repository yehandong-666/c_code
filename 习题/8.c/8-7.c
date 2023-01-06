#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, i, j, index;
    char sx[80][80], stemp[80];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d strings:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", sx[i]); //每行的基地址
    }
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(sx[j], sx[index]) < 0)
            {
                index = j;
            }
        }
        strcpy(stemp, sx[i]);
        strcpy(sx[i], sx[index]);
        strcpy(sx[index], stemp);
    }
    printf("after sorted: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t", sx[i]);
    }

    return 0;
}