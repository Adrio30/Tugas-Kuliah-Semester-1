#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Masukkan angka mulai 20: ";
    cin >> i;
    for (i = 20 ; i <= 100 ; i +=10) {
        cout << "Hasil: " << i << endl;
    }
    return 0;
}