#include <stdio.h>
int main()
{
int A;
printf("Masukan bilangan N \n");
 scanf("%d", &A);
    for(int i = 1; i <= A; i++){
        if(i % 2 == 0){
            printf("-%d ", i);
            continue;
        }
        printf("%d ", i);
    }
}