#include <stdio.h>
int main(void)
{
    char op;
    int operand1, operand2, res;
    scanf("%d", &operand1);
    op = getchar();
    while (op != '=')
    {
        scanf("%d", &operand2);
        switch (op)
        {
        case '+':
            res = operand1 + operand2;
            break;
        case '-':
            res = operand1 - operand2;
            break;
        case '*':
            res = operand1 * operand2;
            break;
        case '/':
            res = operand1 / operand2;
            break;
        default:
            res = 0;
            break;
        }
        operand1 = res;
        op = getchar();
    }
    printf("%d", res);

    return 0;
}