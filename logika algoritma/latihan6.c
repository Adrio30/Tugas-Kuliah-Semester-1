#include <stdio.h>

int main() {
  // Deklarasi array karakter
  char words[] = "Hello";

  // Tampilkan isi array
  for (int i = 0; words[i] != '\0'; i++) {
    printf("%c", words[i]);
  }

  return 0;
}
