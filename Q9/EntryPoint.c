#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *ptr=NULL;
    int iLenght1=0;
    int iCnt;
    BOOL bRet=FALSE;
    printf("Enter size of 1st array:");
    scanf("%d",&iLenght1);
    if(iLenght1<0)
    {
        iLenght1=-iLenght1;
    }
    ptr=(int *) calloc(iLenght1,sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to alocate memory.\n");
        return -1;
    }
    printf("Enter %d elements:",iLenght1);
    for(iCnt=0;iCnt<iLenght1;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet=ChkPallindrome(ptr,iLenght1);

    if(bRet==TRUE)
    {
        printf("The array is pallindrome.\n");
    }
    else if(bRet==FALSE)
    {
        printf("The array is not pallindrome.\n");
    }
    else
    {
        printf("ERROR: Incorrect input values!\n");
    }
    
    free(ptr);
    return 0;
}
