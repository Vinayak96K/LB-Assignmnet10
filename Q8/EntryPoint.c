#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *ptr=NULL;
    int *ptr2=NULL;
    int iLenght1=0;
    int iCnt;
   
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
    ptr2=CopyArray(ptr,iLenght1);
    if(ptr2!=NULL)
    {
        printf("New array list:\n");
       for(iCnt=0;iCnt<iLenght1;iCnt++)
        {
        printf("%d\n",ptr2[iCnt]);
        } 
    }
    else
    {
        printf("Error:Incorrect memory location!\n");
    }


    free(ptr);
    free(ptr2);
    return 0;
}
