// Question :  Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter) 

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in Kilometer : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d\n", iRet);

    return 0;
}