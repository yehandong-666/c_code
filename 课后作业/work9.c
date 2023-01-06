#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,a,n;
    double sum=0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter n:");
    scanf("%d",&n);
    
    for ( i = 1; i <=n; i++)
    {
        sum+=a*i*pow(10,n-i);
    }
    printf("%.0f",sum);


    return 0;
}