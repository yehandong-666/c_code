#include<stdio.h>
#define N 5
int main(void)
{
    int a[N],i;

    printf("Enter array a:\n");

    for ( i = 0; i <N; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <N; i++)
    {
        printf("%5d",a[i]);
    }

    return 0;
}