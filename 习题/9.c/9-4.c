#include <stdio.h>
#define NUMBER 10
struct book
{
    char name[10];
    float price;
};
int main(void)
{
    int i, maxl, minl, n;
    struct book test[NUMBER];
    printf("Enter name and price:");
    for (i = 0; i < NUMBER; i++)
        scanf("%s%f", test[i].name, &test[i].price);
    maxl = minl = 0;
    n=10;
    for (i = 0; i < n; i++)
    {
        if (test[maxl].price < test[i].price)
            maxl = i;
        if (test[minl].price > test[i].price)
            minl = i;
    }
    printf("Max Price:%f,%s\n", test[maxl].price, test[maxl].name);
    printf("Min Price:%f,%s\n", test[minl].price, test[minl].name);
    return 0;
}