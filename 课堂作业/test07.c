#include<stdio.h>
int main(void)
{
    int i,f1,f2,f3;

    f1=1;
    f2=1;
    printf("%-8d%-8d",f1,f2);

    for ( i = 3; i <=20; i++)
    {
        f3=f2+f1;
        f1=f2;
        f2=f3; 

        printf("%-8d",f3);
        if (i%5==0)
        {
            printf("\n");
        }
        
    }
    
    

    return 0;
}