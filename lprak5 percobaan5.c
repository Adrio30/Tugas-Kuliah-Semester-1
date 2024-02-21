#include<stdio.h>
#define PHI 3.14f
main()
{

    //inisialisasi variabel
    int bil1, bil2;
    float hasil;

    //input
    printf("masukkan bilangan 1 = ");
    scanf("%d",&bil1);
    printf("masukkan bilangan 2 = ");
    scanf("%d",&bil2);

    //output
    if(bil2==0){
printf("division by zero");        
    }
    else{
        hasil=bil1/bil2;
        printf("hasil bagi %d dengan %d = %.3f", bil1, bil2, hasil);
    }
}