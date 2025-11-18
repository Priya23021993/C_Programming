// Accept N numbers from user and display summation of digits of each number.

// Input:  N:  6
//        Elements: 8225   665   3   76   953   858

// Output:  17  17  3   13  17  21

#include<stdio.h>
# include<stdlib.h>

int DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iNo = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
         iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo /10;
        }
        
            printf("%d",  iSum);
   }
    
   
}

int main()
{
    int iCnt = 0,iSize= 0;
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

    printf("Summation of digits of each number:");
    printf("\n");
    DigitsSum(p,iSize);
    free(p);
    return 0;

}