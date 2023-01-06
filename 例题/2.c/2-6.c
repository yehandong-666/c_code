#include<stdio.h>
int main(void)
{
    int fahr,lower,upper;
    double celsius;

    printf("Enter lower:");
    scanf("%d",&lower);
    printf("Enter upper:");
    scanf("%d",&upper); 

    if (lower<=upper)
    {
        printf("fahr celsius\n");

        for ( fahr=lower;fahr<=upper;fahr++ )
        {
        celsius=(5.0/9.0)*(fahr-32);
        printf("%4d%6.1f\n",fahr,celsius);
        }
        
    }else
    {
        printf("Invalid Value!\n");
    }
    return 0;
    
}