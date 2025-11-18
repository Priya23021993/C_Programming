//Accept N numbers from user check whether the numbers contains 11 in it or not.
// I/P  :  N:  6
//         Elements:85  66  11  80  93   88 
// O/P  :  11 is present

// I/P  :  N:  6
//         Elements:85  66  3  80  93   88 
// O/P  :  11 is absent


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]==11))
        {
           return true;
        }
    }

     return false;
    
     
}

int main()
{

    int iSize = 0,iCnt = 0;
    int *p = NULL;
    bool bRet =  false;

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
    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
   else
    {
        printf("11 is absent");
    }
   
   free(p);
   return 0;
}