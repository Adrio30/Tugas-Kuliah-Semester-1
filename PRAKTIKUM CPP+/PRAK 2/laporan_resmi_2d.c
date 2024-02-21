#include <stdio.h>
main ()
{   
    int a, b, jumlah, ratarata, kuadrat1, kuadrat2;
    a = 7;
    b = 3;
    jumlah = a + b;
    ratarata = jumlah / 2;
    kuadrat1 = a*a;
    kuadrat2 = b*b;
    printf ("jumlah dari a + b = %d\n", jumlah);
    printf ("\nRatarata dari jumlah = %d\n", ratarata);
    printf ("\nNilai kuadrat dari a = %d\n", kuadrat1);
    printf ("\nNilai kuadrat dari b = %d\n", kuadrat2);
}