#include<stdio.h>
int tambah(int bil1, int bil2);
int main()
{
    int bil1, bil2;
    printf("Masukkan bilangan 1 = ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan 2 = ");
    scanf("%d", &bil2);
}

int tambah(int bil1, int bil2)
{
    return bil1+bil2;
}