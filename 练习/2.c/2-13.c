#include<stdio.h>
int main(void)
{
    int i=1,n;
    
    double sum;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
      sum=sum+1.0/i;
    }

    printf("%.2f\n",sum);

    return 0;
}