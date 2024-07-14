//Roll No:086_Name:Muhammad Sami Ur Rehman
//
#include<stdio.h>
void main()
{
    //MAKE A CALCULATOR

   float number_1,number_2;
   char opt;
   printf("enter first number");
   scanf("%f",&number_1);
   printf("enter an operator ( +,-,*,/):");
   scanf(" %c",&opt);
   printf("enter second number");
   scanf("%f",&number_2);
   if(opt =='+')
    printf("%f+%f=%f\n",number_1,number_2,number_1+number_2);
   else if(opt=='-')
    printf("%f-%f=%f\n",number_1,number_2,number_1-number_2);
   else if(opt=='*')
    printf("%f*%f=%f\n",number_1,number_2,number_1*number_2);
   else if(opt=='/')
    printf("%f/%f=%f\n",number_1,number_2,number_1/number_2);
}
