#include <stdio.h>
int inorder(int n);
int main(void)
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("按位顺序输出:%d\n", inorder(n));
    return 0;
}
int inorder(int n)
{
    if (n < 10)
        return n;
    else
        return (inorder(n / 10) * 10 + n % 10);
}