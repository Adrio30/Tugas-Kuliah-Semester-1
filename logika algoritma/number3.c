#include <stdio.h>

#define MAKS 256;

int main()
{
    int i, jumkar = 0;
    char teks(MAKS);

    puts("Masukkan suatu kalimat (maks 255 karakter).");
    puts("Saya akan menghitung jumlah karakternya.\n");
    fgets(teks, sizeof teks, stdin); //masukan dr keyboard
    for(i=0; teks[i]; i++)
        jumkar++;
    printf("\nJumlah karakter = %d\n", jumkar);
}