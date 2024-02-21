#include <stdio.h>
int main ()
{   
    printf("================\n\n");
    float r;
    printf("panjang r = ", &r);
    scanf("%f", &r); 
    printf("\nLuas Lingkaran = %f\n", 3.14 * r * r);
    return 0;
}

