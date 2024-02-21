#include <stdio.h>

void bentuk1(void);
void bentuk2(void);

int main()
{
    char kompiler_c[] =
    {'V','i','s','u','a','l',' ', 'C', '+', '+', '\0'};

    for (int i = 0; kompiler_c[i] != '\0'; i++) {
        printf("%c ", kompiler_c[i]);
    }
    printf("\n");

    bentuk2();
}

void bentuk2(void){
    char kompiler_c[] = "Visual C++";

    for (int i = 0; kompiler_c[i] != '\0'; i++) {
        printf("%c ", kompiler_c[i]);
    }
    printf("\n");
}
