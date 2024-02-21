#include <stdio.h>

int main()
{
    int num, i = 1, total = 0, max, min;
    char option;
    float a;
    
    do {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &num);
        total += num;
        if (i == 1) {
            max = num;
            min = num;
        }
        else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
        i++;
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &option);
    } while (option == 'y' || option == 'Y');
    
    a = (float) total / (i-1);
    printf("Rata-rata = %.2f\n", a);
    printf("Bilangan maksimum = %d\n", max);
    printf("Bilangan minimum = %d\n", min);
    
    return 0;
}