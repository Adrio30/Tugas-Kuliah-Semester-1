#include <stdio.h>
#define MAKS 10

int main ()
{
    int baris, kolom, hasil_kali;

    for (baris = 1; baris <= MAKS; baris++){
        
    for (kolom = 1; kolom <= MAKS; kolom++){
        hasil_kali = baris * kolom;
        printf (" %3d", hasil_kali);
    }    
    printf("\n");   //*pindah baris*//
    }
}