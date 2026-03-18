#include<stdio.h>
int main()
{
    int a = 90;
    int b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf(" value of a : %d\n", a );
    printf(" value of b : %d", b );
    return 0;
}