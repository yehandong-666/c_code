#include<stdio.h>
#define N 5
int main(void)
{
    int i,j,sub,tmp,a[N];


    printf("Enter array a:\n");

    scanf("%d",a[N]);

    for ( i = 0; i < 5; i++)
    {
        sub=i;

        for ( j = i+1; j<5; j++)
        {
            if (a[j]<a[sub])
            {
                sub=i;
            }

            if (sub!=i)
            {
               tmp=a[i];
               a[i]=a[sub];
               a[sub]=tmp;
            }
            
            
        }
        
    }

    printf("%d",a[N]);
    

    return 0;
}