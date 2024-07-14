#include<stdio.h>
void square1();
void main()
{
    square1();
}
void square1()
{
    float number,result;
    printf("enter a number");
    scanf("%f",&number);
   result=number*number;
   printf("square of %f is %f",number,result);
}



