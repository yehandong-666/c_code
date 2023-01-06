#include<stdio.h>
int main(void)
{
    int x= 256;
    printf("256:%d-%d-%d\n",x%10,x/10%10,x/100%10);

    return 0;      
} 