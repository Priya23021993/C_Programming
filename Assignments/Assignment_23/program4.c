//Accept N numbers from user and accept Range,Display all elements form that Range.
// I/P  :  N:  6
//         start:  60
//         End :   90
//         Elements:85  66  3  76  93  88
// O/P  :  66  76  85  88

// I/P  :  N:  6
//         start:  30
//         End :   50
//         Elements:85  66  3  76  93  88
// O/P  :  0


#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
           printf("%d\t",Arr[iCnt]);

        }
    }

}

int main()
{

    int iSize = 0,iCnt = 0,iValue1 = 0,iRet = 0,iValue2=0;
    int *p = NULL;

    printf("Enetr number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the Starting Point:");
    scanf("%d",&iValue1);

    printf("Enter the ending Point:");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d:", iCnt +1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Range(p,iSize,iValue1,iValue2);

     free(p);

    return 0;
}