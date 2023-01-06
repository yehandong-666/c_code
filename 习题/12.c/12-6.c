#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp1, *fp2;
    char ch, ch1, ch2, s[99];
    if ((fp1 = fopen("hello.c", "r")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    if ((fp2 = fopen("new_hello.c", "w")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    while (!feof(fp1))
    {
        ch = fgetc(fp1);
        if (ch == '/')
        {
            if ((ch1 = fgetc(fp1)) == '*')
                while (fgetc(fp1) != '*' && (ch1 = fgetc(fp1)) != '/')
                    fseek(fp1, -sizeof(ch1), 1);
            else if (ch1 == '/')
            {
                ch = '\0';
                for (; ch1 != '\n'; ch1 = fgetc(fp1))
                    ch1 = '\0';
            }
        }
        else if (ch != EOF)
            fputc(ch, fp2);
    }
    if (fclose(fp2))
    {
        printf("can not close file!\n");
        exit(0);
    }
    return 0;
}