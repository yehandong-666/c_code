#include<stdio.h>
int main(void)
{
    int i=1,denominator=1,n;

    double sum=0;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        sum=sum+1.0/denominator;

        denominator=denominator+2;
    }
    

    


    printf("%.2f\n",sum); 
    
    return 0;
}