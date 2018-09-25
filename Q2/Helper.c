#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayEven
//  Description: Accepts base address and size of two array and display the even contents of both the array.
//  Input: int[IN-OUT,IN,IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEven(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    int iCnt1,iCnt2;

    if((iArr1==NULL)||(iSize1<=0)||(iArr2==NULL)||(iSize2<=0))
    {
        printf("Incorect Input!\n");
        return;
    }

    for(iCnt1=0,iCnt2=1; iCnt1<(iSize1) || iCnt2<(iSize1) ; iCnt1=iCnt1+2,iCnt2=iCnt2+2)
    {
        if(iArr1[iCnt1]%2==0)
        {
        printf("%d\t",iArr1[iCnt1]);
        }
        if(iCnt2<iSize1)
        {
            if(iArr1[iCnt2]%2==0)
            {
            printf("%d\t",iArr1[iCnt2]);
            }
        }
    }
    printf("\n");

    for(iCnt1=0,iCnt2=1; iCnt1<(iSize2) || iCnt2<(iSize2) ; iCnt1=iCnt1+2,iCnt2=iCnt2+2)
    {
        if(iArr2[iCnt1]%2==0)
        {
        printf("%d\t",iArr2[iCnt1]);
        }
        if(iCnt2<iSize2)
        {
            if(iArr2[iCnt2]%2==0)
            {
            printf("%d\t",iArr2[iCnt2]);
            }
        }
    }
    printf("\n");
}