#include <stdio.h>
#include <stdlib.h>
struct one_way
{
    int num;
    struct one_way *next;
};
int main(void)
{
    struct one_way *head = NULL, *last, *ptr, *ptr1, *ptr2;
    int num, m;
    do
    {
        scanf("%d", &num);
        if (num != -1)
        {
            struct one_way *p = (struct one_way *)malloc(sizeof(struct one_way));
            p->num = num;
            p->next = NULL;
            if (head == NULL)
                head = p;
            else
                last->next = p;
            last = p;
        }
    } while (num != -1);
    printf("Enter m:");
    scanf("%d", &m);
    while (head != NULL && head->num == m)
    {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }
    if (head == NULL)
        printf("链表中无信息！");
    ptr1 = head;
    ptr2 = head->next;
    while (ptr2 != NULL)
    {
        if (ptr2->num == m)
        {
            ptr1->next = ptr2->next;
            free(ptr2);
        }
        else
            ptr1 = ptr2;
        ptr2 = ptr1->next;
    }
    for (ptr = head; ptr != NULL; ptr = ptr->next)
        printf("%d ", ptr->num);
    return 0;
}
