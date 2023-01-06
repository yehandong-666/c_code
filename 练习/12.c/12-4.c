#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    int countline = 0;
    FILE *fp;
    if ((fp = fopen("12-4.txt", "r")) == NULL)
    {
        printf("Not open!");
        exit(0);
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch != EOF)
            if (ch >= 'A' && ch <= 'Z')
                printf("%c", ch - 'A' + 'a');
            else
                printf("%c", ch);
        if (ch == '\n')
            countline++;
    }
    printf("\n");
    printf("file's line is:%d.", countline + 1);
    if (fclose(fp))
    {
        printf("Can not close!");
        exit(0);
    }
    return 0;
}