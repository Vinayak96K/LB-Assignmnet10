#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *ptr=NULL;
    int *ptr2=NULL,*ptr3=NULL;
    int iLenght1=0,iLenght2=0;
    int iCnt;
    printf("Enter size of 1st array:");
    scanf("%d",&iLenght1);

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

    printf("Enter size of 2nd array:");
    scanf("%d",&iLenght2);

    ptr2=(int *) calloc(iLenght2,sizeof(int));
    if(ptr2==NULL)
    {
        printf("Unable to alocate memory.\n");
        return -1;
    }
    printf("Enter %d elements:",iLenght2);
    for(iCnt=0;iCnt<iLenght2;iCnt++)
    {
        scanf("%d",&ptr2[iCnt]);
    }

    ptr3=ArrayConcat(ptr,iLenght1,ptr2,iLenght2);
    if(ptr3==NULL)
    {
        printf("Error:Incorrect input values!\n");
        return -1;
    }
    for(iCnt=0;iCnt<(iLenght1+iLenght2);iCnt++)
    {
        printf("%d\t",ptr3[iCnt]);
    }
    printf("\n");

    free(ptr);
    free(ptr2);
    free(ptr3);
    return 0;
}