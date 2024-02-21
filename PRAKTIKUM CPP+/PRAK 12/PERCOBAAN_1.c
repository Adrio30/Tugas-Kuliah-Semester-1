#include <stdio.h>

//prototype fungsi
void menu() {
  printf("Pilihan Menu\n");
}

int main() {
  int jumlahPerulangan;

  printf("Masukkan Jumlah Perulangan : ");
  scanf("%d", &jumlahPerulangan);

  for (int i = 0; i < jumlahPerulangan; ++i) {
    // Memanggil fungsi secara berulang
    menu();
  }

  return 0;
}
