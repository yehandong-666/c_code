#include <stdio.h>
void month_day(int year, int yearday, int *pmonth, int *pday);
int main(void)
{
    int day, month, year, yearday;
    printf("Enter year and yearday:");
    scanf("%d%d", &year, &yearday);
    month_day(year, yearday,&month,&day);
    printf("%d-%d-%d\n", year, month, day);
    return 0;
}
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    int tab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    for (i = 1; yearday > tab[leap][i]; i++)
    {
        yearday -= tab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}