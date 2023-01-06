#include<stdio.h>
int main (void)
{
    int a , b , c , d , sum;
    float aver;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:"); 
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");  
    scanf("%d",&d);

    sum=a + b + c + d;
    aver=sum/4.0f;
    printf("sum=%d,aver=%.1f\n",sum,aver); 
    return 0;
    


}