#include<stdio.h>
int main()
{
    char pilihan;
    /*diberi nilai salah lebih dulu*/
    int sudah_benar = 0;

    printf("Pilihlah Y atau T A L. \n");

    /*program dilanjutkan jika tombol Y,y,T atau t ditekan*/

    while(!sudah_benar)
    {
        pilihan = getchar();  /*baca tombol*/
        sudah_benar = (pilihan == 'Y') || (pilihan == 'y') || (pilihan == 'T') || (pilihan == 't') || (pilihan == 'A') || 
        (pilihan == 'a') || (pilihan == 'L') || (pilihan == 'l');
    }

    /*memberi keterangan tentang pilihan*/
    switch(pilihan)
    {
        case 'Y':
        case 'y':
            puts("\nPilihan anda adalah Y");
            break;
        case 'T':
        case 't':
            puts("\nPilihan anda adalah T");  
            break;
        case 'A':
        case 'a':
            printf("\nPilihan anda adalah A"); 
            break;
        case 'L':
        case 'l':
            printf("\nPilihan anda adalah LOVE");
            break;
    }
}