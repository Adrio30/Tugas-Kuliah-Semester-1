#include<stdio.h>
int ganjil(int bil);

int main()
{
    int k;
    printf("Masukkan sebuah angka : ");
    scanf("%d", &k);
    if(ganjil(k)==0)
        printf("Nilai %d adalah bilangan genap ", k);
    else
        printf("Nilai %d adalah bilangan ganjil ", k);
}

int ganjil(int bil)
{
    if(bil%2==0)
        return bil=0;
    else
        return bil=1;
}

