#include <stdio.h>

int main() {
  // Deklarasi array karakter
  char words[100];

  // Membaca string masukan dari keyboard
  printf("Masukkan string: ");
  scanf("%s", words);

  // Mencetak string masukan
  printf("String yang Anda masukkan: %s\n", words);

  return 0;
}

