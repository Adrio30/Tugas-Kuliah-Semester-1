#include <stdio.h>
int main ()
{
    char pil;
    printf("Masukan Karakter bebas : ");
    scanf("%c", &pil);
    while(pil != 'X'){
        pil = getchar();
    }
}