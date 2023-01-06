#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
int main(void)
{
    int n;
    struct time tim;
    printf("Enter time:");
    scanf("%d%d%d", &tim.hour, &tim.minute, &tim.second);
    printf("Enter seconds:");
    scanf("%d", &n);
    tim.hour = (tim.hour * 60 * 60 + tim.minute * 60 + tim.second + n) / 3600 % 24;
    tim.minute = (tim.minute * 60 + tim.second + n) / 60 % 60;
    tim.second = (n + tim.second) % 60;
    printf("%d:%d:%d", tim.hour, tim.minute, tim.second);
    return 0;
}