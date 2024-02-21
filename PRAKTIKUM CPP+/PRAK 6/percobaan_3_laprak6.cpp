#include <stdio.h>
int main ()
{
    int nilai1, nilai_angka;

    printf("=============================\n\n");
    printf("program konversi nilai ke huruf\n");
    printf("=============================\n\n");
    printf("Masukkan Nilai= ");
    scanf("%d" ,&nilai1);

    if (nilai1>=81 && nilai1<=100)
                    printf("\nNilai huruf=A");
    else if (nilai1>=61 && nilai1<=80)
                    printf("\nNilai huruf=B");
    else if (nilai1>=56 && nilai1<=60)
                    printf("\nNilai huruf=C");
    else if (nilai1>=41 && nilai1<=55)
                    printf("\nNilai huruf=B");
    else if (nilai1>=40)
                    printf("\nNilai huruf=E");
    
    else 
                    printf("\nNilai yang diinputkan tidak valid");

}