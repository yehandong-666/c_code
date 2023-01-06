#include <stdio.h>
int sum(int n);
int main(void)
{
    int n;
    

    printf("Enter n:");
    scanf("%d", &n); 
    printf("sum= %d\n",sum (n));

    return 0;
}
int sum(int n)
{
    int result, i;
    result = 0;
    for (i = 1; i <= n; i++)
        result+=i;

    return result;
}