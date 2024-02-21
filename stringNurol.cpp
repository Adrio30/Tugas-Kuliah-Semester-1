#include <stdio.h>

int main()
{
    char name[15];

    printf("Masukkan Nama Anda : ");
    gets (name);

    printf ("\nHalo, %s. Selamat belajar string.\n", name);

}