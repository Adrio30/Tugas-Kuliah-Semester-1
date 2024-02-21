#include <stdio.h>

int main(){
    int i, n, a = 1;
    printf("masukkan blangan : ");
    scanf("%d", &i);

    while(i != 0){
        n=i % 10;
        i=i / 10;
        a=a * n;

    }

    printf("Hail perkalian bilangan : %d\n ",a);

    return 0;
}