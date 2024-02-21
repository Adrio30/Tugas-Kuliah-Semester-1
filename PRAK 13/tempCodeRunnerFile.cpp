include<stdio.h>
int ganjil(int bil);

int main()
{
    int k;
    printf("Masukkan sebuah angka : ");
    scanf("%d", &k);
    if(ganjil(k)==0)
        printf("Nilai %d adalah bilangan genap ", k);
    else
        printf("Nilai %d adala