#include<stdio.h>
int main(void)
{
    int mile,time,cost=0;

    printf("Enter mile and time:\n");

    scanf("%d%d",&mile,&time);

    mile+=time/5;

    if (mile<3)
    {
        cost=10;
    }
    else if (mile<=13)
    {
        cost=10+(mile-3)*2;
    }
    else
    {
        cost=30+(mile-13)*3;
    }

    printf("cost=%d\n",cost);
    

    return 0;
}