#include <stdio.h>

int main() {
    int n, i, j, mol;
    char jawab;

    do {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);
        
        printf("Bilangan prima ke-%d: ", n);

        for (i = 2; ; i++) {
            mol = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    mol = 0;
                    break;
                }
            }
            if (mol) {
                printf("%d ", i);
                n--;
            }
            if (n == 0) {
                break;
            }
        }
        
        printf("\nApakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab);
    } while (jawab != 'y');

    return 0;
}