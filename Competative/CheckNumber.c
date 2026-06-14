// Question:Accept N numbers from user and accept one another number as NO ,check whether NO is present or not. 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

BOOL Check(int Arr[], int iSize, int iNo) 
{ 
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }     
    }   
        if(iCnt < iSize)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

} 

int main() 
{ 
    int iLength = 0,bRet = 0,iCnt = 0, iValue = 0; 
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

    bRet = Check(p, iLength,iValue);

    if(bRet == TRUE) 
    { 
        printf("Number is present"); 
    } 
    else 
    { 
        printf("Number is not present"); 
    } 

    free(p); 

    return 0;
}    

