#include <stdio.h>

void tambahdua(int *px, int *py);

main()
{

    int a,b;

    printf("Masukkan nilai a : "); scanf("%d", &a);
    printf("Masukkan nilai b : "); scanf("%d", &b);

    tambahdua(&a,&b);

    printf("\nHasil nilai ditambah 2\n");
    printf("a = %d b = %d\n", a, b);
}

void tambahdua(int *px, int *py)
{
    *px+=2;
    *py+=2;
}
