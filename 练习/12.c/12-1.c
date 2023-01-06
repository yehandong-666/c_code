#include <stdio.h>
#include <stdlib.h>
struct student
{
    long num;
    char stname[20];
    int score;
};
int main(void)
{
    FILE *fp;
    int i, max, min, j = 0, k = 0;
    struct student students[5];
    if ((fp = fopen("c:\\f12-1.txt", "r")) == NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    fscanf(fp, "%ld%s%d", &students[0].num, students[0].stname, &students[0].score);
    max = min = students[0].score;
    for (i = 1; i <= 4; i++)
    {
        fscanf(fp, "%ld%s%d", &students[i].num, students[i].stname, &students[i].score);
        if (max < students[i].score)
        {
            max = students[i].score;
            j = i;
        }
        if (min > students[i].score)
        {
            min = students[i].score;
            k = i;
        }
    }
    printf("Maxscore: %d,num:%d,name:%s\n", students[j].score, students[j].num, &students[j].stname);
    printf("Minscore: %d,num:%d,name:%s\n", students[k].score, students[k].num, &students[k].stname);
    if (fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}