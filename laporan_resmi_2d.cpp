#include <iostream>
#include <cmath> // untuk fungsi pow()
using namespace std;

int main() {
    double bilangan1, bilangan2;

    // Meminta pengguna memasukan dua bilangan 
    cout << "Masukan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukan bilangan kedua: ";
    cin >> bilangan2;

    // Menghitung jumlah dari kedua bilangan
    double jumlah = bilangan1 + bilangan2;

    // Menghitung rata-rata dari kedua bilangan
    double rata_rata = jumlah / 2;

    // Menghitung kuadrat dari kedua bilangan
    double kuadrat1 = pow(bilangan1, 2);
    double kuadrat2 = pow(bilangan2, 2);

    //menampilkan hasil
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-Rata: " << rata_rata << endl;
    cout << "Kuadrat bilangan pertama: " << kuadrat1 << endl;
    cout << "kuadrat bilangan kedua: " << kuadrat2 << endl;

    return 0;
}