#include <stdio.h>

// Prototype fungsi
void triangular(int n) {
  
  // Hitung jumlah triangular
  int hasil = 0;
  for (int i = 1; i <= n; i++) {
    hasil += i;
  }

  // Hasil
  printf("Jumlah Triangular untuk n = %d adalah %d\n", n, hasil);
}

int main() {
  int n;

  // Input dari pengguna
  printf("Masukkan nilai n untuk mencari triangular : ");
  scanf("%d", &n);

  // Memanggil fungsi triangular
  triangular(n);

  return 0;
}
