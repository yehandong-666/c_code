#include <stdio.h> 
#include<stdlib.h>
int main(void)
{
    FILE *fp1, *fp2;
    int i = 1, j = 1;
    char ch1, ch2;
    if ((fp1 = fopen("12-3.3.1.txt", "r")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    if ((fp2 = fopen("12-3.3.2.txt", "r")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    ch1 = fgetc(fp1);
    ch2 = fgetc(fp2);
    while (ch1 != EOF && ch2 != EOF)
    {
        if (ch1 != ch2)
            break;
        else if (ch1 != '\n')
        {
            j++;
            ch1 = fgetc(fp1);
            ch2 = fgetc(fp2);
        }
        else
        {
            i++;
            j = 1;
            ch1 = fgetc(fp1);
            ch2 = fgetc(fp2);
        }
    }
    printf("首次不同的字符在第%d行、第%d列。\n", i, j);
    if (fclose(fp1))
    {
        printf("can not close file!\n");
        exit(0);
    }
    if (fclose(fp2))
    {
        printf("can not close file!\n");
        exit(0);
    }
}