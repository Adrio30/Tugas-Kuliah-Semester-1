#include <stdio.h>

int main() {
  int n, i, jumlah;

  printf("Masukkan bilangan: ");
  scanf("%d", &n);

  jumlah = 1;
  for (i = 1; n > jumlah;) {
    jumlah *= (n % 10) +1;
    n /= 10;
  }

  printf("Jumlah angka dari bilangan tersebut adalah %d.\n", jumlah);

  return 0;
}