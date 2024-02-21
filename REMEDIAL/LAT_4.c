#include <stdio.h>
#include <string.h>

int main() {
  char *string = "POLITEKNIK";
  char *p = string;

  // Menghitung panjang string
  int length = strlen(string);

  // Menambahkan offset 2 ke alamat memori string
  p += 2;

  // Mencetak karakter yang ditunjuk oleh pointer
  printf("%c\n", *p);

  return 0;
}
