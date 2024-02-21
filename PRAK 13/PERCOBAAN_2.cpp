#include<stdio.h>
int faktorial(long int a);

int main()
{
    long int a, c;
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &a);
    printf("%d! = %d", a, a);
    for(c=a-1; c>=1; c--)
        printf(" x %d", c);
    printf(" = %d", faktorial(a));
}

int faktorial(long int a)
{
    int i, j=1;
    for(i=1; i<=a; i++)
        j = j * i;
    return j;
}