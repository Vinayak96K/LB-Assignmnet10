#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: MinArray
//  Description: Accepts base address and size of two array and display the sum of both the array.
//  Input: int[IN-OUT,IN,IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////

void MinArray(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    int iCnt1=0,iCnt2=0,iMin1=0,iMin2=0;

    if((iArr1==NULL)||(iSize1<=0)||(iArr2==NULL)||(iSize2<=0))
    {
        printf("Incorect Input!\n");
        return;
    }
    iMin1=iArr1[iCnt1];
    iMin2=iArr2[iCnt2];
    for(iCnt1=0,iCnt2=0; iCnt1<iSize1 || iCnt2<iSize2 ;iCnt1++,iCnt2++)
    {
       if(iCnt1<iSize1)
       {
         if(iMin1>iArr1[iCnt1])
         {
            iMin1=iArr1[iCnt1];
         }  
       }
       if(iCnt2<iSize2)
       {
          if(iMin2>iArr2[iCnt2])
          {
            iMin2=iArr2[iCnt2];
          }
       }

    }
    printf("Minimum element from 1st array:%d\n",iMin1);
    printf("Minimum element from 2nd array:%d\n",iMin2);

}