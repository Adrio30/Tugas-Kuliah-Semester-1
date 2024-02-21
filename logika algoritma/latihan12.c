#include <stdio.h>
#include <stdlib.h>

#define JUM_KOLOM 2
#define MAX_KAR 256
int main()
{
    char konversi [][JUM_KOLOM] = {
        'A', 'T',
        'a', 't',
        'E', 'M',
        'e', 'm',
        'I', 'V',
        'i', 'v',
        'O', 'S',
        'o', 's',
        'U', 'J',
        'u', 'j' };

    char kalimat [MAX_KAR], karakter;
    int i= 0, j, jum_kar, jum_penyandi;

    printf("Masukan sebuah kalimat dann akhiri dengan ENTER\n");
    printf("Kemudian kalimat tsb akan disandikan\n");
    printf("kalimat: ");

    while((kalimat[i] = getchar()) != '\n') i++;
    jum_kar = i;

    printf("\nHasil setelah disandikan: ");
    jum_penyandi = sizeof(konversi) / JUM_KOLOM;

    for(i = 0; i < jum_kar; i++)
    {
        karakter = kalimat [i];
        for (j = 0; j < jum_penyandi; j++)
        {
        if (karakter == konversi [j][0])
        {
            karakter = konversi [j][1];
            break;
        }
        if (karakter == konversi [j][1])
         {
            karakter = konversi[j][0];
            break;
         }
        }
        putchar (karakter);
    }
    printf("\n\n");
} 