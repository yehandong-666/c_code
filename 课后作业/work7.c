#include <stdio.h>
int main(void)
{
    int i, choice;

    double price;

    for (i = 1; i <= 5; i++)
    {
        printf("[]apples\n");
        printf("[2]pears\n");
        printf("[3]oranges\n");
        printf("[4]grapes\n");
        printf("[0]Exit\n");

        printf("Enter choice:");

        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            price = 3.00;
            break;
        case 2:
            price = 2.50;
            break;
        case 3:
            price = 4.10;
            break;
        case 4:
            price = 10.20;
            break;
        default:
            price = 0.00;
            break;
        }
        printf("price is %0.2f\n",price);
    }
    printf("Thanks\n");

    return 0;
}