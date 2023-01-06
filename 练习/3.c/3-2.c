#include<stdio.h>
int main(void)
{
    int x,y;

    printf("Enter X:\n");

    scanf("%d",&x);

    if (x<0)
    {
        y=-1;
    }
    else if (x==0)
    {
        y=0;
    }
    else
    {
        y=1;
    }


    printf("y=sign(%d)=%d\n",x,y);
    

    return 0;
}