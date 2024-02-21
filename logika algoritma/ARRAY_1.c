#include <stdio.h>
#define MAKS 5
 main()
{
    int i;
    float total = 0, rata;
    float nilai_tes[MAKS];

    for(i=0; i < MAKS; i++)
    {
        printf("Nilai tes ke-%d : ", i+1);
        scanf("%f", &nilai_tes[i]);
        total = total + nilai_tes[i];
    }
    rata = total / MAKS;

    printf("\nNilai rata-rata = %g\n", rata);
}