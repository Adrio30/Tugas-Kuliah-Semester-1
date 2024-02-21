#include <stdio.h>
int main()
{
    int bilangan1, bilangan2, terbesar_nilai;

    printf("Masukan bilangan 1 : ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan 2 : ");
    scanf("%d", &bilangan2);

    terbesar_nilai = (bilangan1, bilangan2);

 printf("Bilangan terbesar adalah : %d dan bilangan terkecil %d \n \n", bilangan1, bilangan2);


  return 0;
}
int terbesar(int bilangan1, int bilangan2) {
  if (bilangan1 >= bilangan2) {
    return bilangan1;
  } else {
    return bilangan2;
  }
}

