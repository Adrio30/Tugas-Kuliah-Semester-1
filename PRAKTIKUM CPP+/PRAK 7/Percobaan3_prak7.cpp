#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    double hasil;
    const double pi = 3.14159265;

    while (true) {
        cout << "Menu: " << endl;
        cout << "1. Menghitung Volume Kubus" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Menghitung Volume Silinder" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi (0/1/2/3) : ";
        cin >> pilihan;

        switch (pilihan) {
        case 0:
            cout << "Terima Kasih. Program selesai" << endl;
            return 0;
        
        case 1:
            double sisiKubus;
            cout << "Masukkan Panjang Sisi Kubus : ";
            cin >> sisiKubus;
            hasil = pow(sisiKubus, 3);
            cout << "Volume Kubus adalah : " << endl;
            break;
        
        case 2:
            double jariJariLingkaran;
            cout << "Masukkan jari - jari lingkaran : ";
            cin >> jariJariLingkaran;
            hasil = pi * pow(jariJariLingkaran, 2);
            cout << "Luas Lingkaran Adalah : " << hasil << endl;
            break;

        case 3:
            double jariJariSilinder, tinggiSilinder;
            cout << "Masukkan jari - jari silinder : ";
            cin >> jariJariSilinder;
            cout << "Masukkan tinggi silinder : ";
            cin >> tinggiSilinder;
            hasil = pi * pow(jariJariSilinder, 2) * tinggiSilinder;
            cout << "Volume silinder adalah : " << hasil << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Silahkan pilih kembali." << endl;
            break;
        }
    }
    return 0;
}
