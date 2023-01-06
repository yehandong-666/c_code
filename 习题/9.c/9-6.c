#include <stdio.h>
#define N 10
struct students
{
    int num;
    char name[20];
    int score;
    char grade;
};
int set_grade(struct students *p);
int main(void)
{
    struct students student[N];
    int i, count;

    printf("Input 10 students' number,name and score: \n");
    for (i = 0; i < N; i++)
    {
        printf("No.%d:", i + 1);
        scanf("%d%s%d", &student[i].num, student[i].name, &student[i].sc ore);
    }
    count = set_grade(student);
    printf("The count (<60): %d\n", count);
    printf("The student grade:\n");
    for (i = 0; i < N; i++)
        printf("%d %s %c\n", student[i].num, student[i].name, student[i].grade);

    return 0;
}
int set_grade(struct students *p)
{
    int i, n = 0;

    for (i = 0; i < N; i++, p++)
    {
        if (p->score >= 85)
            p->grade = 'A';
        else if (p->score >= 70 && p->score < 85)
            p->grade = 'B';
        else if (p->score >= 60 && p->score < 70)
            p->grade = 'C';
        else
        {

            p->grade = 'D';
            n++;
        }
    }

    return n;
}