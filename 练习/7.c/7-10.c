#include <stdio.h>
int main(void)
{

    int i, max, flag;
    char a[80], op;

    printf("Enter a:");
    op = getchar();
    fflush(stdin); //或setbuf(stdin,NULL);(清空标准输入缓冲区,防止第一次的回车被第二次输入操作捕捉)
    printf("Enter a string:");
    i = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    max = 0;
    flag = 0;
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == op)
        {
            max = i;
            flag = 1;
        }

    if (flag == 1)

        printf("Max=%d", max);

    else

        printf("Not Found!");

    return 0;
}
