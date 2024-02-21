#include <stdio.h>
int main()
{
    int A;
    printf("bilangan ganji ke m = ");
    scanf("%d", &A);
for(int i = 1; i <= A; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d ", i);
    }
}