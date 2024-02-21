#include<stdio.h>
float masukan(int jumlah_data);
float average(int jumlah_data, float total);

int main()
{
    int jumlah_data;
    printf("Masukkan jumlah data : ");
    scanf("%d", &jumlah_data);

    float total_nilai = masukan(jumlah_data);
    float rata_rata = average(jumlah_data, total_nilai);

    printf("Total nilai : %.2f\n", total_nilai);
    printf("Rata-rata nilai : %.2f\n", rata_rata);

    return 0;
}

float masukan(int jumlah_data)
{
    float total =0;
    for (int i = 1; i <= jumlah_data; ++i)
    {
        float data;
        printf("Masukkan data ke-%d : ", i);
        scanf("%f", &data);
        total += data;
    }
    return total;
}

float average(int jumlah_data, float total)
{
    return total / jumlah_data;
}