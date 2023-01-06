#include<stdio.h>
 int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main(void)
{
    int x,y;

    printf("Enter x and y:");
    
    scanf("%d%d",&x,&y);

    printf("Max is %d\n",max(x,y));


    return 0;
}