#include<stdio.h>
int even(int n);
int main(void)
{
    int n;

    printf("Enter n:\n");

    scanf("%d",&n);
  
    if (even(n)==1)
    {
        printf("Yes!\n");
    }
    
    else
    {
        printf("No!\n");
    }

}
int even(int n)
{
   

    if (n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
   

    return 0;
    
}
