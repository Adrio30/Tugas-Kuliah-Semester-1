#include <stdio.h>

int main() {
  char letters[5] = {'A', 'B', 'C', 'D', 'E'};

  // Masukkan karakter 'Z' pada elemen ke-empat
  letters[3] = 'Z';

  // Tampilkan array letters
  for (int i = 0; i < 5; i++) {
    printf("%c ", letters[i]);
  }

  return 0;
}
