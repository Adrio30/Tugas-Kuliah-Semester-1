#include<stdio.h>
int main ()
{

    //inisialisasi variabel
    int bil;

    //input
    printf("masukkan sebuah bilangan: ");
    scanf("%d",&bil);

    //output
    if(bil%7==0){
        printf("%d adalah bilangan kelipatan 7", bil);
    }
    else{
printf("%d adalah bukan bilangan kelipatan 7", bil);        
    }
}
