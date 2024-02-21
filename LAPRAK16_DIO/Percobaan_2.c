#include <stdio.h>

float f_to_i(float feet);
float i_to_cm(float inches);
float cm_to_m(float cm);

int main()
{
  float feet;
  printf("Masukkan ukuran dalam satuan kaki (feet): ");
  scanf("%f", &feet);

  float inches = f_to_i(feet);
  float cm = i_to_cm(inches);
  float meter = cm_to_m(cm);

  printf("Ukuran dalam satuan meter: %.2f\n", meter);

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

float cm_to_m(float cm)
{
  return cm / 100;
}
