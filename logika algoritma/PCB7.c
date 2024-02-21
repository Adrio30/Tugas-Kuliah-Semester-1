#include <stdio.h>

int main() {
    int a = 1;
    while (a <= 5) {
        int b = 1;
        while (b <= a) {
            printf("%d", a);
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}

