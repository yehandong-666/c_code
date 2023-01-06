#include <stdio.h>
int main(void)
{
    int i, response;
    int count[9];
    for (i = 1; i <= 8; i++)
    {
        count[i] = 0;
    }
    for (i = 1; i <= 1000; i++)
    {
        printf("Enter your response:");
        scanf("%d", &response);
        if (response >= 1 && response <= 8)
        {
            count[response]++;
        }
        else
        {
            printf("invalid:%d\n", response);
        }
    }
    printf("result:\n");
    for (i = 1; i <= 8; i++)
    {
        printf("%4d%4d\n", i, count[i]);
    }

    return 0;
}