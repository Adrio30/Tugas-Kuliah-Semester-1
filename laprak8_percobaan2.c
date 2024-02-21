#include <stdio.h>
 int main()
{
    int a,b,c=0;
    printf("masukkan bilangan triangular = ");
    scanf("%d",&a);
    printf("\n%d",b);
    c=c+a;
    for (b=a-1; b>=1; b--){
            printf("+%d",b);
            c=c+b;
    }
    printf("\nhasilnya adalah %d\n",c);
}