#include <stdio.h>
#include "sqlist.h"
#include "base.h"

int main()
{
    Random();
    //SqList L = CreateSqList(10);
    //SqList L = CreateSqList2(5);
    //SqList LL = CreateSqList3(10);
    //DisplaySqList(L);
    //ReverseSqList(L);
    //DisplaySqList(L);
    //DelXSqList(L,2);
    //DelSTNumSqList(L, 1, 3);
    //DelSameNumSqList(L);
    //SqList LLL = SqListCat(L, LL);
    //DisplaySqList(LLL);
    //ReverseTwoSqList(LLL, 10, 10);
    //DisplaySqList(LLL);
    SqList L4 = CreateSqList4(6);
    FindOrInstertx(L4, 5);
    DisplaySqList(L4);
    return 0;
}
