#include<stdio.h>
int main ()
{
    //inisialisasi variabel
    int total;

    //input 
    printf("masukkan total pembelian = ");
    scanf("%d" ,&total);

    //output
    if(total>=100000){
        total=total-(total*5/100);
        printf("total pembelian dikurangi diskon adalah = %d", total);

    }
    else{
        printf("tidak ada potongan harga");
    }
}