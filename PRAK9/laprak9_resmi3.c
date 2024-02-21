#include <stdio.h> 
int main() {
    char kalimat[1000];
    int jumlah_karakter = 0, jumlah_spasi = 0, jumlah_huruf_kecil = 0, jumlah_huruf_besar = 0, jumlah_angka = 0, i = 0;
    
    printf("Masukkan kalimat: ");
    while((kalimat[i] = getchar ()) != '\n') {
        if(kalimat[i] == ' ') {
            jumlah_spasi++;
        } else if(kalimat[i] >= 'a' && kalimat[i] <= 'z') {
            jumlah_huruf_kecil++;
        } else if(kalimat[i] >= 'A' && kalimat[i] <= 'Z') {
            jumlah_huruf_besar++;
        } else if(kalimat[i] >= '0' && kalimat[i] <= '9') {
            jumlah_angka++;
        }
        i++;
        jumlah_karakter++;
    }
    
    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);
    printf("Jumlah huruf kecil = %d\n", jumlah_huruf_kecil);
    printf("Jumlah huruf besar = %d\n", jumlah_huruf_besar);
    printf("Jumlah angka = %d\n", jumlah_angka);
    
    return 0;
}