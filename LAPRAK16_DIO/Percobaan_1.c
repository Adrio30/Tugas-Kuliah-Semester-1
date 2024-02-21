#include <stdio.h>

float masukan(int jumlah_data);
float average(int jumlah_data, float total_nilai);

int main()
{
  int jumlah_data;
  printf("Masukkan jumlah data: ");
  scanf("%d", &jumlah_data);

  float total_nilai = masukan(jumlah_data);
  float rata_rata = average(jumlah_data, total_nilai);

  printf("Rata-rata nilai: %.2f\n", rata_rata);

  return 0;
}

float masukan(int jumlah_data)
{
  float total_nilai = 0;
  for (int i = 1; i <= jumlah_data; i++)
  {
    float data;
    printf("Masukkan data ke-%d: ", i);
    scanf("%f", &data);
    total_nilai += data;
  }

  return total_nilai;
}

float average(int jumlah_data, float total_nilai)
{
  return total_nilai / jumlah_data;
}
