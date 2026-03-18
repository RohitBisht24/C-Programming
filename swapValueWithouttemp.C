#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp;
     
    temp = a;
    a = b;
    b = temp;

    printf("value of a : %d\n", a );
    printf("value of b : %d\n", b );
    return 0;
}