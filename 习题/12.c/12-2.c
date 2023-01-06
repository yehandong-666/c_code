#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int number;
    if ((fp = fopen("12-3.2.txt", "w")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    printf("Enter number:\n");
    scanf("%d", &number);
    while (number != -1)
    {
        fprintf(fp, "%d", number);
        scanf("%d", &number);
    }
    if (fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}