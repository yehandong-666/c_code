#include<stdio.h>
int main(void)
{
    int n,sum=0,i;
    printf("Enter n:");
    scanf("%d",&n);
   
    while (n>0 )
    {
         sum+=n%10;
         n/=10;
    }
     

    printf("Sum=%d\n",sum);
    return 0;
}