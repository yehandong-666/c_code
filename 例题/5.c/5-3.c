#include<stdio.h>
#include<math.h>
double funpi(double e);
int main(void)
{
    double e,pi;

    printf("Enter e:\n");

    scanf("%lf",&e);

    pi=funpi(e);

    printf("pi=%f\n",pi);

    return 0;



}
double funpi(double e)
{
    int flag=1,denominator=1;
    double item=1.0,sum=0;

    while (fabs(item)>=e)
    {
        item=flag*1.0/denominator;
        sum+=item;
        flag=-flag;
        denominator+=2;

    }

    return sum*4;
    
}