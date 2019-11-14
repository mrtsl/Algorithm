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
void ClearSqList(SqList &L);
void DisplayElemSqList(ElemType x);
void DisplaySqList(SqList L);
void ReverseSqList(SqList &L);
void DelXSqList(SqList &L, ElemType x);
void DelXSqList2(SqList &L, ElemType x);