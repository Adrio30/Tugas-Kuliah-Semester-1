#include <stdio.h>
int main()
{
    int n, i;
    printf("Masukkan n : ");
    scanf("%d", &n);
    printf("Bilangan ganjil kecuali kelipatan 7 dan 11 = ");
    for (int i = 1; i <n; i+=2)
    {
        if(i%7==0 || i%11==0) continue;
        if (i>100) break;
        printf("%3d", i);
       
    }
   

    }
