#include <stdio.h>
int main(void)
{

    int i, j, k;
    char hexad[80], str[80];
    long number; 
    printf("Enter a string:");
    i = 0;
    while ((str[i] = getchar()) != '#')
        i++;
    str[i] = '\0';
    k = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == '-' || str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= 'F')
            hexad[k++] = str[i];
    hexad[k] = '\0';
    j = 1;
    if (hexad[0] == '-')
    {
        for (k = 1; hexad[k] != '\0'; k++)
            if (hexad[k] != '-')
                hexad[j++] = hexad[k];
    }
    else
    {
        j = 0;
        for (k = 0; hexad[k] = !'\0'; k++)
            if (hexad[k] != '-')
                hexad[j++] = hexad[k];
    }
    printf("New string:");
    for (i = 0; hexad[i] != '\0'; i++)
        putchar(hexad[i]);
    printf("\n");
    number = 0;
    for (i = 0; hexad[i] != '\0'; i++)
    {
        if (hexad[i] >= '0' && hexad[i] <= '9')
            number = number * 16 + hexad[i] - '0';
        else if (hexad[i] >= 'A' && hexad[i] <= 'F')
            number = number * 16 + hexad[i] - 'A' + 10;
        else if (hexad[i] >= 'a' && hexad[i] <= 'f')
            number = number * 16 + hexad[i] - 'a' + 10;
    }
    if (hexad[0] = '-')
        printf("Number=%ld\n", -number);
    else
        printf("Number=%ld\n", number);
    return 0;
}
