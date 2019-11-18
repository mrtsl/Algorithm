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
//important********************   
void ReverseSqList(SqList &L, int left, int right)
{
    int mid = (right + left)/2;
    if(L.length == 0)
    {
        LOG("NULL sqlist\n");
        return;
    } else if (left >= right) {
        LOG("error reverse!\n");
    } else {
        LOG(" left = %d right = %d\n", left, right);
        
        for (int i = 0;i <= mid - le ft; i++){ //二分逆序
            SwapElemSqList(L.data[left + i], L.data[right - i]);
            LOG("L.left data[%d] = %d, L.right data[%d] = %d\n", i + left, L.data[i + left], right - i, L.data[right - i]);
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
    int i, j;
    for (i = 0, j = 1; j < L.length; j++) {
        if (L.data[j] != L.data[i]) {
            L.data[++i] = L.data[j];
        }
    }
    L.length = i + 1;
} 

//p18 2.8 逆置两个表 思路就是总的先逆，然后再部分逆
//important **********
void ReverseTwoSqList(SqList &L, int m, int n) 
{
    if (L.length == 0 || L.length != m + n) {
        LOG("error!\n");
    } else {
        ReverseSqList(L, 0, m + n - 1);
        ReverseSqList(L, 0, n - 1);
        //LOG("XXXX\n");
        //LOG("XXXX\n");
        /* (AB)^-1 = B^-1A^-1 
           然后再(B^-1)^-1,(A^-1)^-1(其中A逆的逆要加上是从n 到 m + n -1的序列) 
        */
        ReverseSqList(L, n, m + n -1); 
    }
}
//p18 2.9 
void FindOrInstertx(SqList &L, ElemType x)
{
    int left = 0;
    int right = L.length - 1;
    int mid = (left + right)/2;
    if (L.length == 0) {
        LOG("NULL SQL");
        return;
    } else {
        while (left <= right) {
            LOG("left = %d , mid = %d, right = %d\n", left, mid, right);
            if (L.data[mid] == x) {
                if (mid == L.length - 1) {
                    LOG("LAST IS X,CANT SWAP\n");
                } else {
                    SwapElemSqList(L.data[mid], L.data[mid + 1]);
                }
                return;
            } else if ( L.data[mid] > x) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            mid = (left + right)/2;
        }
        if (left > right) {
            LOG("left = %d , mid = %d, right = %d\n", left, mid, right);
            InsertSqList(L, left + 1, x); //应该是插入的位置是left对应的位置所以是left + 1(left是数组下标)
        }
    }
}


