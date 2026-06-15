// Question: Accept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
     int iCnt = 0;
     int iNo = 0;
     int iSum = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
        iNo = Arr[iCnt];
        iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        printf("Summation of digits are :%d\n",iSum);
    }
}

int main()
{
    int iLength = 0,iRet = 0,iCnt = 0;
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

    DigitsSum(p, iLength);

    free(p);

    return 0;
}