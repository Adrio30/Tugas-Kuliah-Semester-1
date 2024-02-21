#include <stdio.h>
int main ()
{   
  printf("=======================\n\n");
  float c, f;
  printf("Masukkan nilai celcius = ", &c);
  scanf("%f", &c);
  printf("\nPengorvesian Celcius ke Fahren = %f\n", c * 1.8 + 32);
return 0;
}

