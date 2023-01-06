#include<stdio.h>
int main(void)
{
    int i,x1,x2,x;

    x1=1;
    x2=1;
    printf("%6d%6d",x1,x2);
    for ( i = 1; i <=8; i++)
    {
        x=x1+x2;
        x1=x2;
        x2=x;
        printf("%6d",x);
    }
    printf("\n");

    return 0; 
}