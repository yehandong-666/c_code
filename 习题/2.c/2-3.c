#include<stdio.h>
int main(void)
{
    int m,n,i;
    double sum=0;

    printf("Enter m n:\n");

    scanf("%d%d",&m,&n);
 
    for ( i = m; i <=n; i++)
    {
      sum+=i*i+1.0/i;
    }
    

    printf("%f",sum);
 
    return 0;
}