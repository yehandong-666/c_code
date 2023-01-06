#include<stdio.h>
#define LEN 5
void storeZeros(int x[],int n);
int main(void)
{
    int a[LEN],i;

    printf("Entert array a:\n");

    for ( i = 0; i <LEN; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <LEN; i++)
    {
        printf("%3d",a[i]); 
    }
    printf("\n");

    storeZeros(a,LEN);


    for ( i = 0; i<LEN; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    

    return 0;
}
void storeZeros(int x[],int n )
{
    int i;
    for ( i = 0; i < n; i++)
    {
        x[i]=0;
    }
    return 0;
}

