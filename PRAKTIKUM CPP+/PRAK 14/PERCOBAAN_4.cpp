#include <stdio.h>
#include <math.h>
#define PHI 3.142857f;
float cariBC(float,float);
float radian(float);
main()
{
float sudutBAC,sisiAB,sisiBC;
printf("HITUNG SISI SEGITIGA");
printf("\nMasukkan besaran sudut BAC = ");
scanf("%f", &sudutBAC);
printf("\nMasukkan panjang sisi AB = ");
scanf("%f", &sisiAB);
sisiBC = cariBC(sudutBAC,sisiAB);
printf("\nPanjang sisi BC adalah %.2f meter\n\n",sisiBC);
getchar();
}
float cariBC(float fn_sudutBAC,float fn_sisiAB)
{
return tan(radian(fn_sudutBAC)) * fn_sisiAB;
}
float radian(float derajat)
{
return (derajat / 180.0f) * PHI;
}
