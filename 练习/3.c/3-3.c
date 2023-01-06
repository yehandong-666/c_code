#include<stdio.h>
int main(void)
{
    int count=0,i,n;

    double grade,total=0;

    printf("Enter n:\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        printf("Enter grade #%d:",i);
        
        scanf("%lf",&grade);

        total+=grade;

        if (grade>=60)  
        {
            count++;

            printf("Grade average=%.2f\n",total,n);

            printf("Number of pass=%d\n",count);
        }
        
    }
    





    return 0;
}