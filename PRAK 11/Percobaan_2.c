#include <stdio.h>
int main (){
   
    int a, b, c;
    char jawaban;

    do{

        printf("Masukan nilai demensi : ");
        scanf("%d", &c); 

        for(a=1; a<=c; a++)
        {
            for(b=1; b<=a; b++)
            printf("%3d ", a);
            printf("\n");
        }
    
      printf("Apakah anda ingin keluar (y/t)? ");
        scanf(" %c", &jawaban);
    } while (jawaban != 'y'); 
}