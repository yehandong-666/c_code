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
    int i, n, max, min;
    struct student students[50];
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the info of No.%d:\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num); 
        printf("name:");
        scanf("%s", &students[i].name);
        printf("math score:");
        scanf("%d", &students[i].math);
        printf("english score:");
        scanf("%d", &students[i].english);
        printf("computer score:");
        scanf("%d", &students[i].computer);
        students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
    }
    max = min = 0;
    for (i = 1; i < n; i++)
    {
        if (students[max].average < students[i].average)
            max = i;
        if (students[min].average > students[i].average)
            min = i;
    }
    printf("max_average_infortmation:\n");
    printf("number:%d,name:%s,math:%d,english:%d,computer:%d,average:%.2lf\n", students[max].num, students[max].name, students[max].math, students[max].english, students[max].computer, students[max].average);
    printf("min_average_information:\n");
    printf("number:%d,name:%s,math:%d,english:%d,computer:%d,average:%.2lf\n", students[min].num, students[min].name, students[min].math, students[min].english, students[min].computer, students[min].average);

    return 0;
}