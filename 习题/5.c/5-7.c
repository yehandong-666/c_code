#include<stdio.h> #include<math.h>
double funcos(double e, double x); int main(void)
{

double e, sum, x;

printf("Input e and x:"); scanf("%lf%lf",&e,&x); sum=funcos(e,x); printf("cos%lf=%lf\n",x,sum);


return 0;
}
double funcos(double e,double x)
{
int flag, i;
double item, sum, tmp, power;

flag=1; power=1; tmp=1; i=0;
item=1; sum=0;
while(fabs(item)>=e){ item=flag*power/tmp;

sum=sum+item; power=power*x*x; tmp=tmp*(i+1)*(i+2); flag=-flag;
i=i+2;
}


return sum;
}
