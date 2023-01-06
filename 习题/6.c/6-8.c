#include <stdio.h>
int main(void)
{
    char op;
    int count, word;
    printf("Enter words:");
    op = getchar();
    count = word = 0;
    while (op != '\n')
    {
        if (op == ' ')
        {
            word = 0;
        }
        else if (word == 0)
        {
            count++;
            word = 1;
        }
        op = getchar();
    }
    printf("count=%d\n", count);

    return 0;
}