#include<stdio.h>
int main(void)
{
    int i,n,denominator=1,flag=1;

    double sum=0;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        sum=sum+flag*1.0/denominator;

        flag=-flag;

        denominator=denominator+3;
    }
    
    printf("%.2f\n",sum);

    return 0;
}