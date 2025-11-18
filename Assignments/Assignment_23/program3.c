//Accept N numbers from user and accept one another number as NO,return index of last occurrence of that NO.
// I/P  :  N:  6
//         NO: 66
//         Elements:85  66  3  66  93  88
// O/P  :  3

// I/P  :  N:  6
//         NO:93
//         Elements:85  66  3  66  93  88
// O/P  :  4

// I/P  :  N:  6
//         NO:12
//         Elements:85  11  3  15  11  111
// O/P  :  -1


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if((Arr[iCnt]==iNo))
        {
           return iCnt;

        }
    }

     return -1;
    
     
}

int main()
{

    int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
    int *p = NULL;

    printf("Enetr number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the Number:");
    scanf("%d",&iValue);

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
    iRet= LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("Last Occurrence of number is %d",iRet);
    }
   free(p);
   return 0;
}