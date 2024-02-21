#include <stdio.h>
int main (){
    int a, b, c;
    char jawaban, lanjot;

    do {
        printf("Masukan nilai demensi : ");
        scanf("%d", &c); 

        for(a=1; a<=c; a++)
    {
        for(b=1; b<=c; b++)
        printf("%d ", b);
        printf("\n");
    }
    printf("Apakah Anda ingin keluar (y/t)? ");
    scanf(" %c", &jawaban);
  } while (jawaban != 'y' && lanjot != 't');

  if (jawaban == 'y') {
    printf("Terima kasih telah menggunakan program ini.\n");
    return 0;
  } else {
    printf("Program akan diulang.\n");
    }
    
}
    
