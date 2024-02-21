#include <stdio.h>

int main() {
  // Deklarasi array karakter
  char stuff[50];

  // Inisialisasi elemen array dengan nilai 0
  for (int i = 0; i < 50; i++) {
    stuff[i] = '\0';
  }

  // Isi elemen array dengan nilai string "Welcome"
  for (int i = 0; i < 7; i++) {
    stuff[i] = "Welcome"[i];
  }

  // Tampilkan isi array
  printf("stuff = %s\n", stuff);

  return 0;
}
