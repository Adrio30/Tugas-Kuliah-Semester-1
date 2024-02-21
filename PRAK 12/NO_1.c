#include <stdio.h>

// Fungsi untuk menampilkan string "Pilihan Menu"
void menu() {
  printf("Pilihan Menu\n");
}

int main() {
  int n;

  // Menerima input dari user untuk jumlah perulangan
  printf("Masukkan jumlah perulangan: ");
  scanf("%d", &n);

  // Memanggil fungsi menu() secara berulang-ulang
  for (int i = 0; i < n; i++) {
    menu();
  }

  return 0;
}
