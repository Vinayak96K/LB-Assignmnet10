#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ChkPallindrome
//  Description: Accepts base address and size of an array and returns true if array is pallindrome otherwise returns false.
//  Input: int[IN-OUT,IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkPallindrome(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    BOOL bFlag=TRUE;
    if((iArr==NULL)||(iSize<=0))
    {
        return ERR;
    }
    
    for(iCnt1=0,iCnt2=(iSize-1);iCnt1<iCnt2;iCnt1++,iCnt2--)
    {
        if(iArr[iCnt1]!=iArr[iCnt2])
        {
            bFlag=FALSE;
            break;
        }
    }

    return bFlag;
    
}