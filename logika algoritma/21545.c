#include <stdio.h>

#define JUM_KOLOM 2
#define MAX_KAR 256

int main() {
  char konversi[][JUM_KOLOM] = {
    'A', 'T',
    'a', 't',
    'E', 'M',
    'e', 'm',
    'I', 'V',
    'i', 'v',
    'O', 'S',
    'o', 's',
    'U', 'J',
    'u', 'j'
  };

  char kalimat[MAX_KAR];
  int i, j, jum_kar, jum_penyandi;

  printf("Masukkan sebuah kalimat dan akhiri dengan ENTER\n");
  printf("Kemudian kalimat tab akan saya sandikan\n");
  printf("Kalimat: ");

  for (i = 0; (kalimat[i] = getchar()) != '\n'; i++);
  jum_kar = i;

  printf("\nHasil setelah disandikan: ");
  jum_penyandi = sizeof(konversi) / JUM_KOLOM;

  for (i = 0; i < jum_kar; i++) {
    for (j = 0; j < jum_penyandi; j++) {
      if (kalimat[i] == konversi[j][0]) {
        kalimat[i] = konversi[j][1];
        break;
      } else if (kalimat[i] == konversi[j][1]) {
        kalimat[i] = konversi[j][0];
        break;
      }
    }
    putchar(kalimat[i]);
  }
  printf("\n\n");

  return 0;
}
