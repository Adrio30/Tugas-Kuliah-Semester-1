#include <stdio.h>
void bentuk1(void)
void bentuk2(void)

main()
{
    bentuk1 ();
    bentuk2 ();
}
void bentuk1 (void)
{
    char kompiler_c[] =
    {'V','I','S','U','A','L',' ','+','+','\0'};

    puts(kompiler_c);
}
void bentuk2 (void)
{
    char kompiler_c[] = "visual c++";
    printf("%s\n", kompiler_c);
}