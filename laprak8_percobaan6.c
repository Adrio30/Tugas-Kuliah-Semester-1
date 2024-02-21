#include<stdio.h>
int main()
{
    int i, j;
    printf("Masukkan nilai n = ");
    scanf("%d", &i);
    for(j = 1; j <= i; j++)
    {
        if(j%2==0)
        printf(" -%d ", j);

        else
        printf("%3d", j);
    }

}