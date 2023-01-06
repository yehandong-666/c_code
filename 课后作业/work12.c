#include<stdio.h>
#define N 5
int findmin(int a[],int n);
int main(void)
{
    int a[N],i,max;
    printf("Enter array a:\n");
    for ( i = 0; i <N; i++)
    {
        scanf("%d",&a[i]);
    }
    max=findmin(a,N);
    
    printf("%d",max);
    
}
int findmin(int a[],int n)
{
    int i,max=0;
    for ( i = 0; i <n; i++)
    {
        if (a[i]>a[max])
        {
            max=i;
        }
        
    }
    return a[max];
    
}