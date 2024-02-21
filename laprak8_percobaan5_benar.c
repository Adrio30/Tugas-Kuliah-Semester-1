#include<stdio.h>
int main()
{
    int i, nilai, bil;
    printf("masukkan nilai n = ");
    scanf("%d", &nilai);

    for(i= 1; i<=nilai; i++){

    bil = i % 2;

    if(bil == 1){
        printf(" %d ", i);
    }
    }
    
}