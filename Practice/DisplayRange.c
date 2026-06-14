// Question: Accept N numbers from user and accept Range, Display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd) 
{ 
   int iCnt = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
   }

} 

int main() 
{ 
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; 
    int *p = NULL; 

    printf("Enter number of elements : \n"); 
    scanf("%d",&iLength); 

    printf("Enter the starting point : \n"); 
    scanf("%d",&iValue1); 

    printf("Enter the ending point : \n"); 
    scanf("%d",&iValue2); 

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

    Range(p, iLength, iValue1, iValue2);

    free(p); 

    return 0;
}    

