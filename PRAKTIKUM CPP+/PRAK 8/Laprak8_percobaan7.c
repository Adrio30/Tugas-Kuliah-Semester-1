#include <stdio.h>
int main()
{
     int A; 
     printf("Masukan nilai n (faktorial) \n");
    scanf("%d", &A);
    for(int i = 1; i <= A; i++){
        if(i == 1){
            printf("%d", i);
            continue;
        }
        printf("* %d", i);
    }
}
