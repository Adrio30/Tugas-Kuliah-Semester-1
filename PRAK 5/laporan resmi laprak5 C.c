#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("input number : ");
    scanf("%d", &num);

    if(num>0) {
        printf("category a");
    } else {
        printf("category b\n");
        if(num<=0) {
            printf("category a");
        }
    }
    return 0;
}