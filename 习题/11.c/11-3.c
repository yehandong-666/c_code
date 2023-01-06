#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int max_len(char *s[], int n);
int main(void)
{
    int n, i = 0, j;
    char *s[10], str[10];
    printf("Enter n(n<10) :");
    scanf("%d", &n);
    printf("Input %d string:\n", n);
    while (i < n)
    {
        scanf("%s", str);
        s[i] = (char *)calloc(sizeof(char), strlen(str) + 1);
        strcpy(s[i], str);
        i++;
    };
    printf("length=%d", max_len(s, n));
    return 0;
}
int max_len(char *s[10], int n)
{
    int i, max, k;
    max = 0;
    for (i = 0; i < n; i++)
    {
        k = strlen(s[i]);
        max = (max > k) ? max : k;
    }
    return max;
}