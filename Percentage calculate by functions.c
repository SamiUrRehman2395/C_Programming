#include<stdio.h>

int calculatePercentage (int PF, int ICT);

int main()
{
    int PF=79;
    int ICT=83;
    printf("Percentage is : %d", calculatePercentage( PF,  ICT));
}

int calculatePercentage (int PF, int ICT)
{
    return (ICT + PF)/2;
}
