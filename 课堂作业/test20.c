#include<stdio.h>
int main(void)
{
    int a[2][3],max,i,j;

    printf("Enter an array:\n");

    for (  i = 0; i <2; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    max=findMax(a,2);
    
    printf("Max is %d\n",max);
    
    return 0;
}

int findMax(int x[][3],int n) 
{
    int max,i,j;

    max=x[0][0];

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (x[i][j]>max)
            { 
              max=x[i][j];  
            }
            
        }

        return max;
        
    }
    

}