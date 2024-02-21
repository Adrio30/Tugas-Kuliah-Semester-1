#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("input number : ");
    scanf("%d", &num);

    if (num>0) {
        printf("Category A");
    } else {
        printf("Category B");
    }
    return 0;
}
