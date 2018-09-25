#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CopyArrayRev
//  Description: Accepgts base address and size of array, copies all elements into a new array in reverse format and returns the base address of new array.
//  Input: int[IN-OUT,IN]
//  Output: int[IN-OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int * CopyArrayRev(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    int *iArr2=NULL;
    if((iArr==NULL)||(iSize<=0))
    {
        return NULL;
    }

    iArr2=(int *) malloc(iSize*sizeof(int));
    if(iArr2==NULL)
    {
        printf("Unable to allocate memory!\n");
        return NULL;
    }

    for(iCnt1=(iSize-1);iCnt1>=0;iCnt1--,iCnt2++)
    {
        iArr2[iCnt2]=iArr[iCnt1];
    }
    return iArr2;
}