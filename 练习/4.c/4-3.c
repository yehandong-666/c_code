#include<stdio.h>
#include<math.h>
int main(void)
{
    int denominator,flag;

    double item,sum,eps;

    flag=1;denominator=1;item=1;sum=0;

    printf("Enter eps:\n");

    scanf("%lf",&eps);

    while (fabs(item)>=eps)
    {
        item=flag*1.0/denominator;
        sum+=item;
        flag=-flag;
        denominator+=3;
    }
    printf("sum=%f\n",sum);



    return 0;
}