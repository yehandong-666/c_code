#include <stdio.h>
#include <stdlib.h>

#define TRUE		1
#define FALSE		0
#define OK		1
#define ERROR		0 
#define INFEASIBLE	-1 
#define OVERFLOW	-2

#define LIST_INIT_SIZE	100
#define LISTINCREMENT	10

typedef int Status;
typedef int ElemType;
typedef struct
{
	ElemType *elem;
	int length;
	int listsize;
} SqList;

Status InitList_Sq(SqList &L);
Status ListInsert_Sq(SqList &L, int i, ElemType e);
int ListLength_Sq(SqList L); 
Status GetElem_Sq(SqList L, int i, ElemType &e);
Status compare(ElemType a, ElemType b);
int LocateElem_Sq(SqList L, ElemType e);
Status PriorElem_Sq(SqList L, ElemType cur_e, ElemType &pre_e);
Status ListTraverse_Sq(SqList L);
Status DestroyList_Sq(SqList &L);


int main(void)
{
	SqList LA;
	ElemType e;

	// 建立 LA(5, 3, 6, 9)
	InitList_Sq(LA);
	ListInsert_Sq(LA, 1, 9);
	ListInsert_Sq(LA, 1, 6);
	ListInsert_Sq(LA, 1, 3);
	ListInsert_Sq(LA, 1, 5);

	// 输出 6 的前驱
	PriorElem_Sq(LA, 6, e);
	printf("The prior of 6:\t%5d\n", e);

	// 遍历 LA
	printf("LA:\t\t");
	ListTraverse_Sq(LA);
	printf("\n\n");

	// 建立 LB(9, 8, 5, 2, 7)

	// 输出 8 的后继

	// 遍历 LB

	// 删除 LB 中的第 2 个元素，输出删除的元素，然后遍历 LB

	// 实现算法 2.1，并作运算 LA = LA∪LB

	// 遍历 LA

	// 将 LA、LB 置为空表

	// 建立有序表 LA(3, 5, 6, 8, 11)

	// 遍历 LA

	// 建立有序表LB(2, 6, 8, 9, 11, 15, 20)

	// 遍历 LB

	// 将 LA、LB 归并到 LC

	//遍历 LC

	// 销毁 LA
	DestroyList_Sq(LA);

	return 0;
}

Status InitList_Sq(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if(!L.elem)
		exit(OVERFLOW);

	L.length = 0;
	L.listsize = LIST_INIT_SIZE;

	return OK;
}

Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
	ElemType *newbase, *p, *q;

	if(i < 1 || i > L.length + 1)
		return ERROR;

	if(L.length >= L.listsize)
	{
		newbase = (ElemType *)realloc(L.elem,
			(L.listsize + LISTINCREMENT) * sizeof(ElemType));
		if(!newbase)
			exit(OVERFLOW);

		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}

	q = &(L.elem[i - 1]);
	for(p = &(L.elem[L.length - 1]); p >= q; --p)
		*(p + 1) = *p;

	*q = e;
	++L.length;

	return OK;
}

int ListLength_Sq(SqList L)
{
	return L.length;
}

Status GetElem_Sq(SqList L, int i, ElemType &e)
{
	if(i < 1 || i > ListLength_Sq(L))
		return ERROR;

	e = L.elem[i - 1];

	return OK;
}

Status compare(ElemType a, ElemType b)
{
	if(a == b)
		return TRUE;
	else
		return FALSE;
}

int LocateElem_Sq(SqList L, ElemType e)
{
	int i;
	ElemType *p;

	i = 1;
	p = L.elem;
	while(i <= L.length && !compare(*p++, e))
		++i;

	if(i <= L.length)
		return i;
	else
		return 0;
}

Status PriorElem_Sq(SqList L, ElemType cur_e, ElemType &pre_e)
{
	int location;

	location = LocateElem_Sq(L, cur_e);
	if(location > 1)
	{
		GetElem_Sq(L, location - 1, pre_e);

		return OK;
	}
	else
		return ERROR;
}

Status ListTraverse_Sq(SqList L)
{
	int i;

	for(i = 0; i < ListLength_Sq(L); i++)
		printf("%5d", L.elem[i]);

	return OK;
}

Status DestroyList_Sq(SqList &L)
{
	free(L.elem);
	L.elem = NULL;

	L.length = 0;
	L.listsize = 0;

	return OK;
}