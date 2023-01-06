#include <stdio.h>
struct student
{
    int num;
    char name[10];
    int computer, english, math;
    double average;
};
int main(void)
{
    int i, n;
    double math_sum, english_sum, computer_sum;
    struct student s1;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter the student's number, name and course scores:\n");
    math_sum = english_sum = computer_sum = 0;
    for (i = 1; i <= n; i++)
    {
        printf("No.%d:", i);
        scanf("%d%s%d%d%d", &s1.num, s1.name, &s1.math, &s1.english, &s1.computer);
        math_sum += s1.math;
        english_sum += s1.english;
        computer_sum += s1.computer;
    }

    printf("math_ave:%.2lf\nenglish_ave:%.2lf\ncomputer_ave:%.2lf\n", math_sum / n, english_sum / n, computer_sum / n);

    return 0;
}