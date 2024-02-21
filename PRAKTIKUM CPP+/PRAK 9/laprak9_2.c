#include <stdio.h>
int main()
{
    int num, i = 1, total = 0;
    char option;
    do {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &num);
        total += num;
        i++;
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &option);
    } while (option == 'y' || option == 'Y');
    printf("Total bilangan = %d", total);
    return 0;
}