#include<stdio.h>
#include<math.h>
int isPrime(int x)
{

    int i;
    for ( i = 2; i <sqrt(x); i++)
    {
        if (x%i==0)
        {
          break;
        }
        
    }
    if (i>sqrt(x))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main(void)
{
    int n,flag;
    printf("Enter n:\n");
    scanf("%d",&n);
    flag=isPrime(n);

    if (flag==1)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
    
    return 0;
}