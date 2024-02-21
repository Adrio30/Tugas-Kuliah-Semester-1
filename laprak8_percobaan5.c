#include<stdio.h>
int main()
{
    int i, n, k = 0;

    printf("masukkan nilai n = ");
    scanf("%d", &n);
    k = n*2;
    for(i= 1; i<k; i=i+2)
    printf(" %d ", i);
}