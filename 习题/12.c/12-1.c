#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char ch;
    int letter = 0, digiter = 0, other = 0;
    if ((fp = fopen("12-3.1.txt", "r")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
            letter++;
        else if (ch >= '0' && ch <= '9')
            digiter++;

        else
            other++;
    }
    printf("letter=%d,digiter=%d,other=%d", letter, digiter, other);
    if (fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}