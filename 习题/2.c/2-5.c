#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n;

    double sum=0;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        sum+=sqrt(i); 

    } 

   printf("%.2f\n",sum);
    return 0;
}