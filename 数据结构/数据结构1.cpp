#include <stdio.h>
#include <stdlib.h>

#define TRUE		1 
#define FALSE		0 
#define OK		1
#define ERROR		0
#define INFEASIBLE	-1
#define OVERFLOW	-2

typedef int Status;
typedef int ElemType;
typedef ElemType *Triplet;

Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3);
Status DestroyTriplet(Triplet &T);
Status Get(Triplet T, int i, ElemType &e);
Status Put(Triplet &T, int i, ElemType e);
Status IsAscending(Triplet T);
Status IsDescending(Triplet T);
Status Max(Triplet T, ElemType &e);
Status Min(Triplet T, ElemType &e);

int main(void)
{
	Triplet T;
	ElemType e;

	InitTriplet(T, 100, 200, 300);

	Get(T, 2, e);
	printf("The second element is %d\n", e);

	Put(T, 3, 150);
	Get(T, 3, e);
	printf("The third element is %d\n", e);

	Max(T, e);
	printf("The max element is %d\n", e);

	Min(T, e);
	printf("The min element is %d\n", e);

	DestroyTriplet(T);

	return 0;
}

Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3)
{
	T = (ElemType *)malloc(3 * sizeof(ElemType));
	if(!T)
		exit(OVERFLOW);

	T[0] = v1;
	T[1] = v2;
	T[2] = v3;

	return OK;
}

Status DestroyTriplet(Triplet &T)
{
	free(T);
	T = NULL;

	return OK;
}

Status Get(Triplet T, int i, ElemType &e)
{
	if(i < 1 || i > 3)
		return ERROR;

	e = T[i -  1];

	return OK;
}

Status Put(Triplet &T, int i, ElemType e)
{
	if(i < 1 || i > 3)
		return ERROR;

	T[i - 1] = e;

	return OK;
}

Status IsAscending(Triplet T)
{
	return (T[0] <= T[1]) && (T[1] <= T[2]);
}

Status IsDescending(Triplet T)
{
	return (T[0] >= T[1]) && (T[1] >= T[2]);
}

Status Max(Triplet T, ElemType &e)
{
	e = (T[0] >= T[1]) ? ((T[0] >= T[2]) ? T[0] : T[2]) : ((T[1] >= T[2]) ? T[1] : T[2]);

	return OK;
}

Status Min(Triplet T, ElemType &e)
{
	e = (T[0] <= T[1]) ? ((T[0] <= T[2]) ? T[0] : T[2]) : ((T[1] <= T[2]) ? T[1] : T[2]);

	return OK;
}