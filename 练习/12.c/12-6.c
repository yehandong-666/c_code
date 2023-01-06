#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp1, *fp2;
    double a;
    if ((fp1 = fopen("f1.txt", "r")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    if ((fp2 = fopen("f2.txt", "w")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    while (!feof(fp1))
    {
        fscanf(fp1, "%lf", &a);
        fprintf(fp2, "%.0f ", a);
    }
    if (fclose(fp1))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    if (fclose(fp2))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}