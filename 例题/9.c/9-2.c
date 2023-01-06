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
    int i, j, n, index;
    struct student students[50], temp;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the info of No.%d\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num);
        printf("name:");
        scanf("%s", students[i].name);
        printf("math score:");
        scanf("%d", &students[i].math);
        printf("english score:");
        scanf("%d", &students[i].english);
        printf("computer score:");
        scanf("%d", &students[i].computer);
        students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
    }
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (students[i].average > students[index].average)
            {
                index = j;
            }
            temp = students[index];
            students[index] = students[i];
            students[i] = temp;
        }
    }
    printf("num\t name\t average\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2lf\n", students[i].num, students[i].name, students[i].average);
    }

    return 0;
}
