#include "sqlist.h"

//p18 2.1
ElemType DelMinNum(SqList &L)
{
    ElemType minNum;
    if (L.length == 0){
        LOG("NULL SQLIST!\n");
        return False;
    }
    for (int i = 0; i < L.length; i++) {
        if(L.data[i] > minNum) {
           AssignElemSqList(minNum, L.data[i]);
        }
    }
    return minNum;
}                
//p18 2.2        
void ReverseSqList(SqList &L)
{
    ElemType temp;
    if(L.length == 0)
    {
        LOG("NULL sqlist\n");
    } else {
        for (int i = 0;i < L.length/2; i++){
            SwapElemSqList(L.data[i], L.data[L.length - 1 - i]);
        }
    }
}
//p18 2.3 1
void DelXSqList(SqList &L, ElemType x)
{
    int k = 0;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] != x) {
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
}
//p18 2.3 2
void DelXSqList2(SqList &L, ElemType x)
{
    int k = 0;
    for (int i = 0; i < L.length; i++) {
        if(L.data[i] == x) {
            k++;
        } else {
            L.data[i - k] = L.data[i]; 
        }
    }
    L.length = L.length - k;
}

//p18 2.4
void DelSTNumSqList(SqList &L, ElemType min, ElemType max)
{
    int k = 0;
    if (L.length == 0) {
        LOG("sqlist null\n");
        return;
    } else if(min >= max) {
        LOG("input error");
    } else {
        for (int i = 0; i < L.length; i++) {
            if(L.data[i] <= min || L.data[i] >= max) {
                L.data[k] = L.data[i];
                k++;
            }
        }
    }
    L.length = k;

}  //p18 2.5 与此题相同

//p18 2.6 
void DelSameNumSqList(SqList &L)
{
    
}