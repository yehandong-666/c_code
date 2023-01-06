#include <stdio.h>
#include "student.h"
extern Count;
void new_student(struct student students[])
{
    int i, n;
    if (Count == MaxSize)
    {
        printf("The array is full!\n");
        return;
    }
    printf("Enter the Number of Students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the student's num:");
        scanf("%d", &students[i].num);
        printf("Enter the student's name:");
        scanf("%s", students[i].name);
        printf("Enter the student's math score:");
        scanf("%d", &students[i].math);
        printf("Enter the student's english score:");
        scanf("%d", &students[i].english);
        printf("Enter the student's computer score:");
        scanf("%d", &students[i].computer);
        Count++;
    }
}
void output_student (struct student students[])
{

    int i;
    if (Count == 0)
    {
        printf("Count of students is zero!\n");
        return;
    }
    printf(" num\tname\tmath\tenglish\tcomputer\taverage\n");
    for (i = 0; i < Count; i++)
    {
        printf("%d\t", students[i].num);
        printf("%s\t", students[i].name);
        printf("%d\t", students[i].math);
        printf("%d\t", students[i].english);
        printf("%d\t", students[i].computer);
        printf("%f\t\n", students[i].average);
    }
}
