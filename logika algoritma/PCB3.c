#include<stdio.h>
int main()
{
    int total = 0;
    int i;

    for (i=10; i<=100; i++) {
        total+=i;
    }

    printf("total = %d\n", total);

    return 0;

}