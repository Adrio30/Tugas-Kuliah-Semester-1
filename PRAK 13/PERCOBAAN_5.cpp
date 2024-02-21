#include<stdio.h>
float konversi(float suhu, char asal, char tujuan);

main()
{
    float s;
    char a, t;
    printf("Masukkan suhu sumber : ");
    scanf("%f", &s);
    printf("Masukkan satuan asal : ");
    getchar();
    a = getchar();
    printf("Masukkan satuan tujuan : ");
    getchar();
    t = getchar();
    printf("Hasil konversi suhu %f %c = %f %c", s, a, konversi(s, a, t), t);

}
float konversi(float suhu, char asal, char tujuan)
{
    float Hasil;
    if(asal=='C'||asal=='c')
    {
        if(tujuan=='R'||tujuan=='r')
            Hasil=suhu*4/5;
        else if(tujuan=='F'||tujuan=='f')
            Hasil=suhu*9/5+32;
        else if(tujuan=='K'||tujuan=='k')
            Hasil=suhu+273;
    }
    else if(asal=='R'||asal=='r')
    {
        if(tujuan=='C'||tujuan=='c')
            Hasil=suhu*5/4;
        else if(tujuan=='F'||tujuan=='f')
            Hasil=suhu*9/4+32;
        else if(tujuan=='K'||tujuan=='k')
            Hasil=suhu*5/4+273;
    }
    else if(asal=='F'||asal=='f')
    {
        if(tujuan=='C'||tujuan=='c')
            Hasil=(suhu-32)*5/9;
        else if(tujuan=='R'||tujuan=='r')
            Hasil=(suhu-32)*4/9;
        else if(tujuan=='K'||tujuan=='k') 
            Hasil=(suhu-32)*5/9+273;   
    }
    else if(asal=='K'||asal=='k')
    {
        if(tujuan=='C'||tujuan=='c')
            Hasil= suhu-273;
        else if(tujuan=='R'||tujuan=='r')
            Hasil=(suhu-273)*4/5;
        else if(tujuan=='F'||tujuan=='f')
            Hasil=(suhu-273)*9/5+32;
    }
    return Hasil;
}