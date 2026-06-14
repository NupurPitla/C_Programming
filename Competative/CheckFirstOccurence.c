// Question: Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo) 
{ 
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        } 
    } 
    
    return -1;

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

    iRet = FirstOcc(p, iLength,iValue);

    if(iRet == -1) 
    { 
        printf("There is no such number"); 
    } 
    else 
    { 
        printf("First occurrence of number is %d", iRet); 
    } 

    free(p); 

    return 0;
}    

