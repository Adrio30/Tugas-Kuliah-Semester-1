#include<stdio.h>
int main ()
{

    //inisialisasi variabel
    int total;

    //input
    printf("masukan total pembelian = ");
    scanf("%d",&total);

    //output
    if(total<100000){
        printf("total pembelian adalah %d\n", total);
        printf("anda tidak mendapat diskon");
    }
    else{
    total=total-(total*5/100);
    printf("total pembelian dikurangi diskon 5%% adalah = %d", total);

    }
    return 0; 
} 