#include <stdio.h>
struct date
{
    int year;
    int month;
    int day;
};
struct friends_list
{
    char name[10];
    struct date birthday;
    char phone[15];
};
void sort(struct friends_list s[], int n);
int main(void)

{
    int i, n;
    struct friends_list friends[10];
    printf("Input n:");
    scanf("%d", &n);
    printf("Input %d friends' name ,birthday and phone:", n);
    for (i = 0; i < n; i++)
        scanf("%s%d%d%d%s", friends[i].name, &friends[i].birthday.year, &friends[i].birthday.month, &friends[i].birthday.day, &friends[i].phone);
    sort(friends, n);
    for (i = 0; i < n; i++)
        printf("%s%d/%d/%d%s\n", friends[i].name, friends[i].birthday.year, friends[i].birthday.month, friends[i].birthday.day, friends[i].phone);
    return 0;
}
void sort(struct friends_list s[], int n)
{
    int i, j, index;
    struct friends_list temp;
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (s[index].birthday.year > s[j].birthday.year)
                index = j;
            else if ((s[index].birthday.year == s[j].birthday.year) && (s[index].birthday.month > s[j].birthday.month))
                index = j;
            else if ((s[index].birthday.year == s[j].birthday.year) && (s[index].birthday.month == s[j].birthday.month) && (s[index].birthday.day > s[j].birthday.day))
            {
                index = j;
                temp = s[i];
                s[i] = s[index];
                s[index] = temp;
            }
        }
    }