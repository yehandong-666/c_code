#include <stdio.h>
int main(void)
{
    int x = 5342;
    int *p = NULL;

    p = &x;

    printf("If I know the name of the varieble,I can get it's value by name:%d\n", x);

    printf("If I know the name of the varieble is:%x,then I also can get it's value by address:%d\n", p, *p);
    return 0;
}