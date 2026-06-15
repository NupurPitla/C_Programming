// Question: Accept N numbers from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
     int iCnt = 0, iMax = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
    iRet = Maximum(p, iLength);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}