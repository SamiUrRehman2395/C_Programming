#include<stdio.h>


float RectangleArea(float a, float b);
float squareArea(float side);
float CircleArea(float radius);
int main()
{
    float a=5.0;
    float b=10.0;
    float side=6.0;
    float radius=3.0;

    printf("Area of Rectangle is : %f\n", RectangleArea(a,b));

    printf("Area of Square is : %f\n", squareArea(side));

    printf("Area of Circle is : %f\n", CircleArea(radius));
}


float RectangleArea(float a, float b)
{

 return a*b;
}

float squareArea(float side)
{
    return side*side;

}

float CircleArea(float radius)
{
    return 3.14*radius*radius;
}
