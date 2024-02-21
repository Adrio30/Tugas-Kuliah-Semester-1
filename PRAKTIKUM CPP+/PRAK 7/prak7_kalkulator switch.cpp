#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float bil1, bil2;

    int hasil, penjumlahan, pengurangan, pembagian, perkalian;
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

    switch (hasil) {       
         case 1:
            cout << "hasil penjumlahan" << bil1 + bil2;
            break;
        
        case 2:
            cout << "hasil pengurangan" << bil1 - bil2;
            break;
        
        case 3:
            cout << "hasil pembagian" << bil1 / bil2;
            break;
        case 4:
            cout << "hasil perkalian" << bil1 * bil2;
            break;

        default:
            cout << "Pilihan tidak valid. Silahkan pilih kembali." << endl;
            break;

    }


}