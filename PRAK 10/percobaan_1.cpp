#include <stdio.h>
main()
{ 
    char pil;
    printf("Masukan karakter = ");

    for(; ;)
    {
        pil = getchar();
        if (pil== '\n')
        break;
    } 
}