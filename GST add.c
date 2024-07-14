#include<stdio.h>
void calculatePrice(float value);

int main()
{
  float value=1160.0;

   printf("1 Medium Fajita Pizza : %f\n", value);


  calculatePrice(value);

}

void calculatePrice(float value)
{
    value=value+(0.18*value);
    printf("Total Bill : %f\n", value);
}
