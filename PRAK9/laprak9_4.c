#include <stdio.h>

int main() {
    char kalimat[1000];
    int jumlah_karakter = 0, jumlah_spasi = 0, i = 0;
    
    printf("Masukkan kalimat: ");
    while((kalimat[i] = getchar()) != '\n') {
        if(kalimat[i] == ' ') {
            jumlah_spasi++;
        }
        i++;
        jumlah_karakter++;
    }
    
    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);
    
    return 0;
}