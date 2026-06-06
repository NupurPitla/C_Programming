// Question :  Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter) 

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %f\n", dRet);

    return 0;
}