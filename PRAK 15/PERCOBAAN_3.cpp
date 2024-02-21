#include<stdio.h>
int tambahkan(int bil1, int bil2);
int main()
{
    int bil1, bil2, hasil;
    printf("Masukkan bilangan 1 = ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan 2 = ");
    scanf("%d", &bil2);
    hasil = tambahkan (bil1,bil2);
    printf("Hasil penjumlahan %d + %d = %d", bil1, bil2, hasil);
}

int tambahkan(int bil1, int bil2)
{
    int jumlah = bil1+bil2;
}