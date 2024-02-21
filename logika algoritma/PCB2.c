#include <stdio.h>
int main()
{
    int a = 5;
    int b, c;

    for(b=1; b<=a; b++)
    {
        for(c=1; c<=b; c++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}