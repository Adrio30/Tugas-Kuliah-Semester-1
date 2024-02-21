#include <stdio.h>
int main()
{
    float bil1, bil2;
    int hasil;

    printf("program kalkulator sederhana\n");
    printf("masukkan bil1 :");
    scanf("%f" ,&bil1);
    printf("masukkan bil2 :");
    scanf("%f" ,&bil2);
    printf("operasi matematika\n\n");
    printf("1.penjumlahan\n");
    printf("2.pengurangan\n");
    printf("3.pembagian\n");
    printf("4.perkalian\n");
    printf("masukkan pilihan :");
    scanf("%d" ,&hasil);
    if(hasil==1)
            printf("hasil penjumlahan :%.1f\n", bil1+bil2);
    else if (hasil == 2)
            printf("hasil pengurangan :%.1f\n", bil1-bil2);
    else if (hasil == 3)
            printf("hasil pembagian :%.1f\n", bil1/bil2);
    else if (hasil == 4)
            printf("hasil perkalian :%.1f\n", bil1*bil2);
    else
            printf("tidak dalam menu\n");
}