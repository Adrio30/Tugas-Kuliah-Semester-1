#include <stdio.h>

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

int permutasi(int n, int r) {
  return factorial(n) / factorial(n - r);
}

int kombinasi(int n, int r) {
  return permutasi(n, r) / factorial(r);
}

int main() {
  int n, r;

  printf("Masukkan n: ");
  scanf("%d", &n);

  printf("Masukkan r: ");
  scanf("%d", &r);

  printf("\n");

  printf("PERMUTASI\n");
  printf("Hasil permutasi: %d\n\n", permutasi(n, r));

  printf("KOMBINASI\n");
  printf("Hasil kombinasi: %d\n", kombinasi(n, r));

  return 0;
}
