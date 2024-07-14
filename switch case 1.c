#include<stdio.h>
#include<math.h>
void main()
{
    int number=10;
    switch(number%2)
    {
    case 0:
        printf("even no\n");
        break;
    case 1:
        printf("odd number");
        break;
    default:
        printf("invalid no\n");
    }
}
