#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CopyArray
//  Description: Accepts base address and size of array, copies all elements into a new array and returns the base address of new array.
//  Input: int[IN-OUT,IN]
//  Output: int[IN-OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int * CopyArray(int *iArr,int iSize)
{
    int iCnt1=0;
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

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        iArr2[iCnt1]=iArr[iCnt1];
    }
    return iArr2;
}