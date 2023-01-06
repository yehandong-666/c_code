#include <stdio.h>
int main(void)
{
    int n, grade;
    printf("Enter n:\n");
    scanf("%d", &n);
    if (n >= 90)
    {
        grade = 4;
    }
    else if (n>= 80) 
    {
        grade = 3;
    }
    else if (n >= 70)
    {
        grade = 2;
    }
    else if (n >= 60)
    {
        grade = 1;
    }

    else
    {
        grade = 0;
    }
    switch (grade)
    {
    case 4:
        printf("Excellent");
        break;
    case 3:
        printf("Good");
        break;
    case 2:
        printf("Average");
        break;
    case 1:
        printf("Poor");
        break;
    case 0:
        printf("Failing");
        break;

    default:
        printf("Error"); break;
    }

    return 0;
}