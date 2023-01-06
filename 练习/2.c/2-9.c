#include<stdio.h>
int main(void)
{
    int a,b,c;
    double average;

    printf("Enter a b c :");
    
    scanf("%d%d%d",&a,&b,&c);

    average=(a+b+c)*1.0/3;

    printf("average=%.2f\n",average);

    return 0;
}