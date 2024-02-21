#include <stdio.h>
main()
{
    printf("=\n\n");
    char letter;
    printf("Ketik huruf =");
    scanf("%c", &letter);
    switch (letter) {
        case 'X':
            printf("\nsum = 0");
            break;
        case 'Z':
            printf("\nvalid_flag = 1");
            break;
        case 'A' :
            printf("\nsum = 1");
            break;
        default:
            printf("\nUnknown letter -->%c\n", letter);

    }
}