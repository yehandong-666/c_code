#include<stdio.h>
int main(void)
{
    int mynumber=38;
    int yournumber;

    printf("Input yournumber:\n");
    scanf("%d",&yournumber);
    if (yournumber==mynumber)
    {
        printf("OK!you are right!\n");
    }
    else
        if(yournumber>mynumber)
             printf("Sorry!your number is bigger than my number!\n");
        else

            printf("Sorry!your number is smaller than my number!\n");     

    return 0;
}