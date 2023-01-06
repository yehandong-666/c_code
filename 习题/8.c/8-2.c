#include <stdio.h>
int search(int n, int x, int list[]);
int main(void)
{
    int i, n, x, res;
    int a[10]; 
    printf("Enter n:"); 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        {
            scanf("%d", &a[i]);
        }
    }
    printf("Enter x:");
    scanf("%d", &x);
    res = search(n, x, a);
    if (res >= 0)
    {
        printf("index=%d\n", res);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
int search(int n, int x, int list[])
{
    int i; 
    for (i = 0; i < n; i++)
    {
        if (list[i] == x) 
        { 
            return i;
        }
    }
    return -1;
}