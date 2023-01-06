#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    double area,pertimeter,s;

    printf("Enter a b c:\n");

    scanf("%d%d%d",&a,&b,&c);

    if ((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        pertimeter=a+b+c;

        s=(a+b+c)*1.0/2;

        area=sqrt(s*(s-a)*(s-b)*(s-c));


    printf("pertimeter=%.2f,area=%.2f\n",pertimeter,area);
    }
    else
    printf("Impossible\n");
    

    return 0;
}