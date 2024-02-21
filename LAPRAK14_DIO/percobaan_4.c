#include <stdio.h>
#include <math.h>

float cariBC(float sudutBAC, float sisiAB) {
  // Konversi sudut dari derajat ke radian
  float radian = sudutBAC * (3.14159265358979323846 / 180.0);

  // Hitung panjang sisi BC
  float sisiBC = tan(radian) * sisiAB;

  return sisiBC;
}

int main() {
  float sudutBAC, sisiAB, sisiBC;

  // Masukkan nilai sudut BAC
  printf("Masukkan besaran sudut BAC = ");
  scanf("%f", &sudutBAC);

  // Masukkan nilai sisi AB
  printf("Masukkan panjang sisi AB = ");
  scanf("%f", &sisiAB);

  // Hitung panjang sisi BC
  sisiBC = cariBC(sudutBAC, sisiAB);

  // Tampilkan hasil
  printf("Panjang sisi BC adalah %.2f meter\n\n", sisiBC);

  return 0;
}
