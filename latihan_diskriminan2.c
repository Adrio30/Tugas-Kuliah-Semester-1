#include <stdio.h>

main ()
{   
    int valid_operator = 1;
    /*valid_operator diinisialisasi dengan logika 1*/
    char operator;
    float number1, number2, result;

    printf("Masukan Dua Buah Bilagan Dan Sebuah Operator\n");
    printf("Dengan format : Number1 operator Number2 \n\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    if(operator == '*')
    result = number1 * number2;
    else if (operator == '/')
    result = number1 / number2;
    else if (operator == '+')
    result = number1 + number2;
    else if (operator == '-')
    result = number1 - number2;
    
    else
    valid_operator = 0;
    
    if(valid_operator)
    printf("\n%g %c %g is %g\n", number1, operator, number2, result);
    
    else
    printf("invalid operator!\n");
}