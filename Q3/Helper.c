#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayConcat
//  Description: Accepts base address and size o two array, concats both array elements and returns the base address of new array.
//  Input: int[IN-OUT,IN,IN-OUT,IN]
//  Output: int[IN-OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int * ArrayConcat(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    int iCnt1=0,iCnt2=0,iCnt3=0,iLenght;
    int *iArr3=NULL;

    if((iArr1==NULL)||(iSize1<=0)||(iArr2==NULL)||(iSize2<=0))
    {
        return NULL;
    }

    iLenght=iSize1+iSize2;

    iArr3=(int *) calloc(iLenght,sizeof(int));
    if(iArr3==NULL)
    {
        return NULL;
    }

    for(iCnt1=0,iCnt2=iSize1; iCnt1<iSize1 || (iCnt2<iLenght && iCnt3<iSize2);iCnt1++,iCnt2++,iCnt3++)
    {
        if(iCnt1<iSize1)
        {
            iArr3[iCnt1]=iArr1[iCnt1];
        }
        iArr3[iCnt2]=iArr2[iCnt3];

    }
    
    return iArr3;
}