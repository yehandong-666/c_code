#include<stdio.h>
#define N 5
int main(void)
{
    int a[N],i,j,tmp;

    printf("Enter array a:\n");

    for ( i = 0; i <N; i++)
    {
       scanf("%d",&a[i]);
        
    }
    for ( i = 0; i < N-1; i++)
    {
        for ( j = i+1; j <N ; j++)
        {
            if (a[j]>a[i])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
                
            }
            
        }
        
    }
    



    for ( i = 0; i < N; i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
    
    

}