#include <stdio.h>

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  int total = 0;

  for (int i = 0; i < 5; i++) {
    total += numbers[i];
  }

  printf("Total: %d\n", total);

  return 0;
}
