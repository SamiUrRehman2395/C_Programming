#include<stdio.h>

float ConvertTemp(float celsius);

int main()
{
    float far = ConvertTemp(37);
    printf("Farhenhiet : %f", far);
    return 0;

}

float ConvertTemp(float celsius)
{
    float far = celsius * 9/5 +32;
    return far;
}
