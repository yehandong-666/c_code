#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char ch;
    if ((fp = fopen("f3.txt", "w+")) == NULL)
    {
        printf("can not open file!");
        exit(0);
    }
    printf("Input the string:\n");
    ch = getchar();
    while (ch != '\n')
    {
        fputc(ch, fp);
        ch = getchar();
    }
    rewind(fp);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch != EOF)
            putchar(ch);
    }
    printf("\n");
    if (fclose(fp))
    {
        printf("can not close file!\n");
        exit(0);
    }
    return 0;
}