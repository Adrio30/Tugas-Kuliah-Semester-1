#include <stdio.h>

int main()
{
    int a, b, c = 0;
    char jawab;

    do
    {
        printf("Berapa banyak bilangan: ");
        scanf("%d", &a);

        for (b = 1; b <= a; b++)
        {
            printf("%d ", c);
            c = c + b;
        }

        printf("\nApakah Anda ingin keluar (y/t)? ");
        scanf(" %c", &jawab);
    } while (jawab != 'y');

    return 0;
}
