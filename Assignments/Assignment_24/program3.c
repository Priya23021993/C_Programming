// Accept N numbers from user and return the difference between Largest and Samllest number.

// Input:  N:  6
//        Elements:85  66  3  66  93  88

// Output:  90(93-3)

#include<stdio.h>
# include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0], iMax = Arr[0];

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }

    }
    return iMax - iMin;
}

int main()
{
    int iCnt = 0, iRet = 0,iSize= 0;
    int *p = NULL;

    printf("Enter the Number of elements:");
    scanf("%d",&iSize);

   p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
       printf("Unable to allocate Memory");
       return -1;
    }

    printf("Enetr %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Difference is %d",iRet);

    free(p);
    return 0;

}