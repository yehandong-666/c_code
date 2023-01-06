#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int x, sum = 0;
    if ((fp = fopen("Int_Date.dat", "ab+")) == NULL)
    {
        printf("can not open file!");
        exit(0);
    }
    while (!feof(fp))
    {
        fscanf(fp, "%d", &x);
        sum += x;
    }
    fprintf(fp, " %d", sum);
    if (fclose(fp))
    {
        printf("can not close the file!\n");
        exit(0);
    }
    return 0;
}