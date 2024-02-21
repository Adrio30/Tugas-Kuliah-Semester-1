#include <stdio.h>

int main() {
  
  float balances[5][3] = {
    {12.3, 15.2, 10.0},
    {19.8, 17.7, 18.9},
    {26.5, 26.6, 26.7},
    {20.0, 21.0, 15.7},
    {12.0, 22.0, 33.0}
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("balances[%d][%d] = %.2f\n", i, j, balances[i][j]);
    }
  }

  return 0;
}
