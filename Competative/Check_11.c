// Question :  Accept N numbers from user check whether that numbers contains 11 in it or not.

#include<stdio.h> 
#include <stdlib.h>

#define TRUE 1 
#define FALSE 0

typedef int BOOL; 

BOOL Check(int Arr[], int iSize) 
{ 
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iLength = 0,iRet = 0,iCnt = 0; 
    int *p = NULL; 
    BOOL bRet = FALSE;

    printf("Enter number of elements\n"); 
    scanf("%d",&iLength); 

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

    bRet = Check(p, iLength); 
    
    if(bRet == TRUE) 
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