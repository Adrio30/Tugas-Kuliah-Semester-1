#include <stdio.h>

int main() {
  int angka, faktorial;
  char jawaban;

  do {
    printf("Masukkan bilangan faktorial: ");
    scanf("%d", &angka);

    faktorial = 1;
    for (int i = 1; i <= angka; i++) {
      faktorial *= i;
    }

    printf("\nHasilnya adalah %d", faktorial);

    printf("\nApakah Anda ingin keluar (y/t)? ");
    scanf(" %c", &jawaban);
  } while (jawaban != 'y');

  return 0;
}
