#include "sqlist.h"
#include <stdlib.h>
#include <string.h>

void SwapElemSqList(ElemType &i, ElemType &j)
{
    ElemType temp;
    temp = i;
    i = j;
    j = temp;
}

void AssignElemSqList(ElemType assigned, ElemType assign)
{
    assigned = assign;
}

void DisplayElemSqList(ElemType x)
{
    printf("%d  ",x);
}

void ClearSqList(SqList &L)
{
    memset(L.data, 0, MAXSIZE);
    L.length = 0;
}

SqList CreateSqList(int number)
{
    SqList L;
    ClearSqList(L);
    for(int i = 0;i < number; i++){
        L.data[i] = (rand()%100);
        L.length++;
    } 
    return L;
}

SqList CreateSqList2(int number)
{
    ElemType a[5] = {1 , 2, 3, 2, 4};
    SqList L;
    ClearSqList(L);
    for(int i = 0; i < number; i++){
        L.data[i] = a[i];
        L.length++;
    } 
    return L;
}

void DisplaySqList(SqList L)
{
    if (L.length == 0) {
        printf("sqlist null\n");
    } else {
        for (int i = 0; i < L.length; i++) {
            DisplayElemSqList(L.data[i]);
            printf("\n");
        }
    }
}