/* 奇数值结点链表 :	输入若干个正整数( 输入-1为结束标志 )建立一个单向链表，头指针为 L，将链表 L 中奇数值的结点
重新组成个新的链表NEW，并输出新建链表的信息	*/
#include <stdio.h>
#include <stdlib.h>
struct one_way
{
    int num;
    struct one_way *next;
};
int main(void)
{
    struct one_way *L = NULL, *last, *ptr, *ptr1, *ptr2, *NEW;
    int num;
    do
    {
        scanf("%d", &num);
        if (num != -1)
        {
            struct one_way *p = (struct one_way *)malloc(sizeof(struct one_way));
            p->num = num;
            p->next = NULL;
            if (L == NULL)
                L = p;
            else
                last->next = p;
            last = p;
        }
    } while (num != -1);
    while (L != NULL && L->num % 2 == 0)
    {
        ptr2 = L;
        L = L->next;
        free(ptr2);
    }
    if (L == NULL)
        NEW = L;
    ptr1 = L;
    ptr2 = L->next;
    while (ptr2 != NULL)
    {
        if (ptr2->num % 2 == 0)
        {
            ptr1->next = ptr2->next;
            free(ptr2);
        }
        else
            ptr1 = ptr2;
        ptr2 = ptr1->next;
    }
    if (NEW == NULL)
    {
        printf("NEW	中不含任何信息 !\n");
        return 0;
    }
    printf("NEW	链表中的信息为： \n");

    for (ptr = L; ptr != NULL; ptr = ptr->next)
        printf("%d ", ptr->num);
    return 0;
}