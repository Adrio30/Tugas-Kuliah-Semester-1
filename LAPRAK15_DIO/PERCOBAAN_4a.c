#include<stdio.h>
int OddEvenTest(int);

int main()
{
    int a, hasil;
    a = 16;
    hasil = OddEvenTest(a);
    printf("a=%d; hasil=%d\n", a, hasil);
}

int OddEvenTest (int b)
{
    int a;
    a = b % 2;
    return a;
}