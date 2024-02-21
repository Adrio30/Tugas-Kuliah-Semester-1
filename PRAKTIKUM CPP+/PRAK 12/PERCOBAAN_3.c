#include <stdio.h>

float kuadrat(float x);

int main() {
  float bilangan;

  // Input dari Pengguna
  printf("Masukkan bilangan untuk mencari Kuadrat : ");
  scanf("%f", &bilangan);

  // memanggil fungsi kuadrat dan menampilkan hasil
  float hasil = kuadrat(bilangan);
  printf("Kuadrat dari %f adalah %f\n", bilangan, hasil);

  return 0;
}

float kuadrat(float x) {
  // Menghitung nilai kuadrat
  return x * x;
}
