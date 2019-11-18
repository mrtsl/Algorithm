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
    LOG("%d  ",x);
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
    ElemType a[10] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    SqList L;
    ClearSqList(L);
    for(int i = 0; i < number; i++){
        L.data[i] = a[i];
        L.length++;
    } 
    return L;
}

SqList CreateSqList3(int number)
{
    ElemType a[10] = {4, 5, 5, 6, 6, 7, 7, 9, 10, 11};
    SqList L;
    ClearSqList(L);
    for(int i = 0; i < number; i++){
        L.data[i] = a[i];
        L.length++;
    } 
    return L;
}

SqList CreateSqList4(int number)
{
    //ElemType a[9] = {4, 5, 6, 7, 9, 10, 12, 14, 16};
    ElemType a[6] = {1, 2, 3, 4, 6, 7};
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
        LOG("sqlist null\n");
    } else {
        for (int i = 0; i < L.length; i++) {
            DisplayElemSqList(L.data[i]);
            printf("\n");
        }
        LOG("L.length = %d\n", L.length);
    }
}

SqList SqListCat(SqList L1, SqList L2)
{
    SqList L;
    ClearSqList(L);
    for (int i = 0; i < L1.length + L2.length; i++) {
        if (i < L1.length) {
            L.data[i] = L1.data[i];
        } else {
            L.data[i] = L2.data[i - L1.length];
        }
            L.length++;
    }
    return L;
}


bool InsertSqList(SqList &L, int x, ElemType data)
{
    int i;
    if (x < 1 || x > L.length + 1) {
        return false;
    } else if( L.length == MAXSIZE) {
        return false;
    } else {
        for(i = L.length; i >= x; i--) {
            L.data[i] = L.data[i - 1]; 
        }
        L.data[x - 1] = data;
        L.length++;
        return true;
    }
}