/* 查找子串 :输入两个字符串	s 和 t ，在字符串 s 中查找子串 t ，输出起始位置， 若不存在，则输出 -1*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *search(char *s, char *t);
int main(void)
{
    int count, i;
    char *s, *t, *p, ch;
    printf("Enter the string(s):\n");
    if ((s = (char *)malloc(sizeof(char))) == NULL)
    {
        printf("Not able to allocate memorry.\n");
        exit(1);
    };
    gets(s);
    printf("Enter the string(t):\n");
    if ((t = (char *)malloc(sizeof(char))) == NULL)
    {
        printf("Not able to allocate memorry.\n");
        exit(1);
    };
    gets(t);
    if ((p = search(s, t)) != NULL)
        printf("起始位置：从第 %d个字符开始 \n", p - s + 1);
    else
        printf("-1\n");
    free(s);
    free(t);
    return 0;
}
char *search(char *s, char *t)
{
    int T, i, j;
    char *p = NULL;
    for (i = 0; i <= strlen(s) - strlen(t); i++)
        if (*(s + i) == *t)
            break;
    p = s + i;
    for (j = 0; j < strlen(t); j++, p++)
        if (*p == *(t + j))
            T = 0;
        else
        {
            T = 1;
            break;
        }
    if (T == 1)
        return NULL;
    else
        return s + i;
}