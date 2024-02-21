#include <stdio.h>
#include <stdlib.h>
int main ()
{   
    float x;
    printf("masukan nilai x = ");
    scanf("%f", &x);
    printf("Maka Hasil evaluasi polynomial dari 3x^2- 5x + 6 adalah %.2f",3*x*x - 5*x + 6);
    return 0;
}