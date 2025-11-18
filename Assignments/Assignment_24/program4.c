// Accept N numbers from user and display all such numbers which contains 3 digitd in it.

// Input:  N:  6
//        Elements: 8225   665   3   76   953   858

// Output:  665   953   858

#include<stdio.h>
# include<stdlib.h>

int Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iNo = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iDigit = 0;

        while(iNo != 0)
        {
            iDigit++;
            iNo = iNo /10;
        }
        if(iDigit == 3)
        {
            printf("%d",Arr[iCnt]);
        }
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

    printf("3-digit numbers are:");
    Digits(p,iSize);
    free(p);
    return 0;

}