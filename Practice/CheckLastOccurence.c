// Question: Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo) 
{ 
    int iCnt = 0;
    int iPos = -1;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        } 
    } 
    
    return iPos;

} 

int main() 
{ 
    int iLength = 0,iRet = 0,iCnt = 0, iValue = 0; 
    int *p = NULL; 

    printf("Enter number of elements : \n"); 
    scanf("%d",&iLength); 

    printf("Enter the number : \n"); 
    scanf("%d",&iValue); 

    p = (int *)malloc(sizeof(int) * iLength); 

    if(p == NULL) 
    { 
        printf("Unable to allocate memory"); 
        return -1; 
    } 

    printf("Enter %d elements\n",iLength); 

    for(iCnt = 0; iCnt < iLength; iCnt++)                                         
    {   
        printf("Enter element : %d\n",iCnt+1); 
        scanf("%d",&p[iCnt]);
    } 

    iRet = LastOcc(p, iLength,iValue);

    if(iRet == -1) 
    { 
        printf("There is no such number"); 
    } 
    else 
    { 
        printf("Last occurrence of number is %d", iRet); 
    } 

    free(p); 

    return 0;
}    

