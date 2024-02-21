#include <stdio.h>
int main()
{
    printf(" Masukan bilangan Trigular =");
    int N, hitung = 0;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--)
    {
        hitung += i;
    }
    printf("%d", hitung);
}