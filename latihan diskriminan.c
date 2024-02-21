#include <stdio.h>
#include <math.h>
main()
{   
    float a, b, c, d = 0;
    double x1, x2, imaginair;

    printf("MENCARI AKAR AKAR PERSAMAAN KUADARAT a+bx+c=0\n");
    printf("\n Masukan nilai a :");
    scanf("%f", &a);
    printf("Masukan nilai b :");
    scanf("%f", &b);
    printf("Masukan nilai c :");
    scanf("%f", &c);
    d = b*b-4*a*c;    /*Menghitung diskriminan*/
    
    if(d >= 0)
    if(d == 0)
{
    x1=-b / (2*a);
    printf("\ndua angka real kembar yaitu : ");
    printf("x1 = x2 = %g\n", x1);
    }

    else
    {
        x1 = (-b + sqrt (d)) / (2*a);
        x2 = (-b - sqrt (d)) / (2*a);
        printf("\ndua akar real berlainn yaitu : \n");
        printf("x1 = %g\n", x1);
        printf("x2 = %g\n", x2);
    }
        else
        {   
            imaginair = (sqrt(-d)/(2*a))
            x1 = -d / (2*a);
            printf("\ndua akar imaginair berlainan yaitu : \n");
            printf("x1 = %g + %gi \n", x1, imaginair);
            printf("x2 = %g - %gi \n", x1, imaginair);
        } 

        }