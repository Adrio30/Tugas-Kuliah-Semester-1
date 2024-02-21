#include<stdio.h>
int prima(int x);
int main()
{
    int p;
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &p);
    if(prima(p)==0)
        printf("Bilangan %d adalah bukan bilangan prima", p);
    else
        printf("Bilangan %d adalah bilangan prima", p);
}

int prima(int x)
{
    int a, b, c;
    if(x<=1)
        return c = 0;
    for(a=2; a<x; a++)
    {
        b=x%a;
        if(b==0)
            break;
    }
    if(b==0)
        return c = 0;
    else
        return c = 1;
}