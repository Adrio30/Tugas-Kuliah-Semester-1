#include <stdio.h>

void bentuk1 (void);
void bentuk2 (void);
 
int main()
{
    bentuk1();
    bentuk2();
}

void bentuk1 (void)
{
    char kompiler_C[] =
    {'V', 'i', 's', 'u', 'a', 'l', ' ', 'c', '+', '+', '\0'};

    puts(kompiler_C);
}

void bentuk2(void)
{
    char kompiler_c[] = "Visual C++";
    printf("%s\n", kompiler_c);
}
