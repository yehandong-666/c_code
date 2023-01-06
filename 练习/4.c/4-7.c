#include<stdio.h>
int main(void)
{
    int i,j,n;

    double e=1,t=1;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            t*=i;

            e+=1.0/t;
        }
        
    }
    printf("e=%.2f\n",e);

    return 0;
}