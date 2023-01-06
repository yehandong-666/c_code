#include<stdio.h>
int main(void)
{
    int i,n;
    long int a,sn=0,tn=0;

    printf("Input a,n:");

    scanf("%d%d",&a,&n);

    for(i=1;i<=n;i++)
    {
        tn+=a;
        sn+=tn;
        a*=10;
    }
    printf("s=%ld\n",sn);

    return 0;
}