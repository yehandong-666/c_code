#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[999];
int main(void)
{
    FILE *fp;
    int i;
    if ((fp = fopen("test.txt", "r")) == NULL)
    {
        printf("can not open file!\n");
        exit(0);
    }
    while (!feof(fp))
    {
        fgets(s, 999, fp);
        if (strlen(s) > 3)
        {
            for (i = 0; i < strlen(s) - 2; i++)

                if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'r')
                    printf("%s", s);
        }
    }
    if (fclose(fp))
    {
        printf("can not close file!\n");
        exit(0);
    }
    return 0;
}