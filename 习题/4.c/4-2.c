#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    int i=1;

    double item,s=1,x;

    item=x;

    while (fabs(item>=1e-5))
    {
        item=pow(x,i)/fact(i);

        s+=item;

        i++;
    }

    printf("s=%2f\n",s);


   return 0;
} 
double fact(int n)
{
    int i;

    double result=1;

    for ( i = 1; i <=n; i++)
    {

        result*=i;

    }

    return result;
    

}