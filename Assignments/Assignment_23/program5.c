//Accept N numbers from user and return product of all odd elements.
// I/P  :  N:  6
//         Elements:15  66  3  70  10  88
// O/P  :  45

// I/P  :  N:  6
//         Elements:44  66  72  70  10  88
// O/P  :  0


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProd = 1;
    bool iFlag= true;

    for(iCnt = 0,iFlag=false; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] %2)!=0)
        {
           iProd = iProd * Arr[iCnt];
           iFlag = true;
        }
    }
    if(iFlag==true)
    {
        return iProd;
    }
    else
    {
        return 0;
    }
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
    iRet = Product(p,iSize);

    printf("Product is %d",iRet);

     free(p);

    return 0;
}