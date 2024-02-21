#include <stdio.h>

int main() {
  char letters[10];

  for (int i = 0; i < 10; i++) {
    letters[i] = 'a' + i;
  }

  // Cetak nilai array
  for (int i = 0; i < 10; i++) {
    printf("%c ", letters[i]);
  }

  return 0;
}
