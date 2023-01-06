#include <stdio.h>
int main(void)
{
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July",
                        "Aguest", "September", "October", "November", "December"};

    int month;
    printf("Enter the month:");
    scanf("%d", &month);
    printf("Month in English:%s", months[month - 1]);
    return 0;
}