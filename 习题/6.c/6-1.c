#include <stdio.h>
int main(void)
{
    char op;
    int letter, blank, digit, other;

    printf("Input characters:");
    op = getchar();

    letter = blank = 0;
    digit = other = 0;
    while (op != '\n')
    {
        if (op == ' ')
            blank++;
        else if (op >= 'a' && op <= 'z' || op >= 'A' && op <= 'Z')
            letter++;
        else if (op >= '0' && op <= '9')
            digit++;
        else
            other++;
        op = getchar();
    }

    printf("letter=%d,blank=%d, digit=%d,other=%d", letter, blank, digit, other);

    return 0;
    
}