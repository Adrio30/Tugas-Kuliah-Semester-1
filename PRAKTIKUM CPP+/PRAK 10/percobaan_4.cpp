#include<stdio.h>
int main()
{
    int n, i;
    float nilai, jumlah=0, min=0, maks=0;
    printf("Jumlah data : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("Nilai ke-%d : ", i);
        scanf("%f", &nilai);
        jumlah = jumlah + nilai;
        if(i==1)
        {
            maks = nilai;
            min = nilai;
        }
        else
        {
            if(maks < nilai) maks = nilai;
            if(min > nilai) min = nilai;
        }
    }
    printf("\nNilai minimal = %.2f", min);
    printf("\nNilai maksimal = %.2f", maks);
    printf("\nNilai rata-rata = %.2f", jumlah/n);
}