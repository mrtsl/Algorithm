#include <stdio.h>
#include "sqlist.h"
#include "base.h"

int main()
{
    Random();
    //SqList L = CreateSqList(10);
    SqList L = CreateSqList2(5);
    DisplaySqList(L);
    //ReverseSqList(L);
    //DisplaySqList(L);
    //DelXSqList(L,2);
    DelSTNumSqList(L, 1, 3);
    DisplaySqList(L);
    return 0;
}
