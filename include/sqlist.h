#include <stdio.h>
#include "base.h"

#define ElemType int

#define MAXSIZE 50

typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SqList;

void AssignElemSqList(ElemType assigned, ElemType assign);
void SwapElemSqList(ElemType &i, ElemType &j);
SqList CreateSqList2(int number);
SqList CreateSqList(int number);
SqList CreateSqList3(int number);
SqList CreateSqList4(int number);
void ClearSqList(SqList &L);
void DisplayElemSqList(ElemType x);
void DisplaySqList(SqList L);
void ReverseSqList(SqList &L, int x);
void DelXSqList(SqList &L, ElemType x);
void DelXSqList2(SqList &L, ElemType x);
void DelSTNumSqList(SqList &L, ElemType min, ElemType max);
void DelSameNumSqList(SqList &L);
SqList SqListCat(SqList L1, SqList L2);
void ReverseTwoSqList(SqList &L, int m, int n);
void FindOrInstertx(SqList &L, ElemType x);
bool InsertSqList(SqList &L, int x, ElemType data);