//Accept N numbers from user and return frequency of 11 form it.
// I/P  :  N:  6
//         Elements:85  66  3  15  93  88
// O/P  :  0

// I/P  :  N:  6
//         Elements:85  11  3  15  11  111 
// O/P  :  2


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]==11))
        {
           iCount++;
        }
    }

     return iCount;
    
     
}

int main()
{

    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;
   

    printf("Enetr number of elements:\n");
    scanf("%d",&iSize);

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
    iRet= Frequency(p,iSize);

    printf("%d",iRet);
   
   free(p);
   return 0;
}