#include <stdio.h>

int main() {

  int a, b;

  printf("Masukkan nilai a : "); scanf("%d", &a);
  printf("Masukkan nilai b : "); scanf("%d", &b);

  // Tambahkan 2 ke nilai a dan b
  a = a + 2;
  b = b + 2;

  // Tampilkan hasil
  printf("a = %d b = %d\n", a, b);

  return 0;
}
