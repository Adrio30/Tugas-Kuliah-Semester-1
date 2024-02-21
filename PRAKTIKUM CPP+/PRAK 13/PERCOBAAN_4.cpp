#include<stdio.h>
#define PI 3.14159f
float radian(float derajat);

main()
{
    float derajat;
    printf("Derajat : ");
    scanf("%f", &derajat);
    printf("Radian : %f", radian(derajat));
}

float radian(float derajat)
{
    float radian;
    radian = derajat / 180.0f * PI;
    return radian;
}