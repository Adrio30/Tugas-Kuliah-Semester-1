#include <stdio.h>

int main() {
  char words[5];

  for (int i = 0; i < 5; i++) {
    printf("Masukkan karakter ke-%d: ", i+1);
    scanf("%c", &words[i]);
  }

  printf("\nKarakter yang dimasukkan:\n");
  for (int i = 0; i < 5; i++) {
    printf("%c ", words[i]);
  }

  return 0;
}
