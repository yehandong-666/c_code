#include <stdio.h>
#include <string.h>
char *match(char *s, char ch1, char ch2);
char p[80];
int main()
{
    char str[10], ch1, ch2, *s;
    printf("Enter the string:");
    scanf("%s", str);
    getchar();
    printf("Enter start_end character:");
    scanf("%c%c", &ch1, &ch2);
    getchar();
    s = match(str, ch1, ch2);
    printf("%s\n", s);
    return 0;
}
char *match(char *s, char ch1, char ch2)
{
    int i = 0, j, k = 0;
    while (s[i] != ch1)
        i++;
    j = i;
    while (s[i] != ch2)
        i++;
    for (; j <= i; j++)
        p[k++] = s[j];
    return p;
}
// 为什么设置全局变量
// 局部变量的特点：随函数调用时创建，随函数结束时析构（销毁）.指针指向的是一个正被销毁了的对象。