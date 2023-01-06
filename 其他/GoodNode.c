#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct GoodNode
{
    int ID;
    char name[10];
    double price;
    int kucun;
    struct GoodNode *next;
};

void showMainMenu(void);
int userChoose();
void init();
void insert(void);
void del(void);
void search(void);
void modify(void);
void listAll(void);
void insertAtP(struct GoodNode *p);

struct GoodNode *head = NULL; // 全局变量
struct GoodNode *tail = NULL;

void main(void)
{
    int choice;
    while (choice != -1)
    {
        showMainMenu();
        choice = userChoose();
    }
}

int userChoose()
{
    int choice;
    struct GoodNode *head;

    printf("input your choice:");
    scanf("%d", &choice);
    printf("your choice is: %d\n", choice);

    switch (choice)
    {
    case 1:
        init();
        break;
    case 2:
        insert();
        break;
    case 3:
        del();
        break;
    case 4:
        search();
        break;
    case 5:
        modify();
        break;
    case 6:
        listAll();
        break;
    default:
        break;
    }

    return choice;
}

void init()
{
    struct GoodNode *p;
    int id;
    printf("head = %d\n", head);
    if (!head)
    {
        printf("input id:");
        scanf("%d", &id);
        while (id != -1)
        {
            p = (struct GoodNode *)malloc(sizeof(struct GoodNode));

            p->ID = id; //	注意这行的位置

            printf("input name:");
            scanf("%s", p->name);
            printf("input price:");
            scanf("%lf", &p->price);
            printf("input kucun:");
            scanf("%d", &p->kucun);

            printf("input ID:");
            scanf("%d", &id);

            p->next = NULL;

            if (tail)
                tail->next = p;
            else
            {
                head = p;
            }
            tail = p;
        }
    }
    else
        printf("lianbiao is not empty\n");

    printf("init() is running\n");
}
void insert(void)
{
    int choice,num,n;
    struct GoodNode *p;
    printf("insert() is running\n");
    printf("1.在链表头插入:\n");
    printf("2.在链表尾插入:\n");
    printf("3.在链表中间第i个结点插入:\n");

    printf("请输入您的选项");
    scanf("%d", &choice);
    printf("您的选项:%d\n", choice);
    switch (choice)
    {
    case 1:
        insertAtP(head);
        break;
    case 2:
        insertAtP(tail);
        break;
    case 3:
        printf("请输入插入位置序号:");
        scanf("%d", &n);
        num = 0;
        for (p = head; p!=NULL&&num<n-1; p=p->next)
        {
            num++;
        }
        insertAtP(p);
        break;
    default:
        printf("error\n");
        break;
    }
}

void insertAtP(struct GoodNode *p)
{
    //创建新结点
    struct GoodNode *n;
    n = (struct GoodNode *)malloc(sizeof(struct GoodNode));

    printf("input id:");
    scanf("%d", &n->ID);
    printf("input name:");
    scanf("%s", n->name);
    printf("input price:");
    scanf("%lf", &n->price);
    printf("input kucun:");
    scanf("%d", &n->kucun);

    n->next = p->next;
    p->next = n;
}

void del(void)
{
    printf("del() is running\n");
}

void search(void)
{
    printf("search() is running\n");
}

void modify(void)
{
    printf("modify() is running\n");
}

void listAll(void)
{
    struct GoodNode *p;
    for (p = head; p != NULL; p = p->next)
    {
        printf("%d\t", p->ID);
        printf("%s\t", p->name);
        printf("%f\t", p->price);
        printf("%d\n", p->kucun);
    }
    printf("listAll() is running\n");
}

void showMainMenu(void)
{
    printf("=================================================\n");
    printf("==1.init()              =========================\n");
    printf("==2.insert()            =========================\n");
    printf("==3.delete              =========================\n");
    printf("==4.search() =====================================\n");
    printf("==5.modify()=====================================\n");
    printf("==6.ListAll()====================================\n");
    printf("=================================================\n");
    printf("=================================================\n");
}
