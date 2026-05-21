#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("value of a = %d\n", a);  // value of a = 10
    printf("Address of a = %p\n", &a);  // address of a 
    printf("pointer value = %p\n", p);  // address of a 
    printf("value using pointer = %d\n", *p);  //
    return 0;
}