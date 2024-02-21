#include<stdio.h>
float f_to_i(float feet);
float i_to_cm(float inches);
float c_to_m(float centimeter);

int main()
{
    float input_feet;

    printf("Masukkan ukuran dalam satuan kaki (feet) : ");
    scanf("%f", &input_feet);

    float inches = f_to_i(input_feet);
    float centimeters = i_to_cm(inches);
    float meters = c_to_m(centimeters);

    printf("Ukuran dalam meter : %.2f meters\n", meters);
   
    return 0;
}

float f_to_i(float feet)
{
    return feet * 12;
}

float i_to_cm(float inches)
{
    return inches * 2.54;
}

float c_to_m(float centimeters)
{
    return centimeters / 100;
}