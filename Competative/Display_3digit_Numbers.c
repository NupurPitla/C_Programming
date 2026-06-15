// Question: Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
     int iCount = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        iCount = Arr[iCnt];

        if(iCount < 0)
        {
            iCount = -iCount;
        }

        if(iCount >= 100 && iCount <= 999)
        {
            printf("%d\n",Arr[iCnt]); 
        }
     }
}

int main()
{
    int iLength = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iLength);

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    printf("Three digit numbers are : \n");

    Digits(p, iLength);

    free(p);

    return 0;
}