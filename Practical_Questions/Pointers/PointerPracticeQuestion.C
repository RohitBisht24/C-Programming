#include <stdio.h>
int main()
{
    int *ptr;  // pointer variable
    int x; // =0

    ptr = &x;
    *ptr = 0;

    printf("%d\n", x);
    printf("%d\n",  *ptr);

    *ptr =+ 5;   //  *ptr = *ptr + 5;

    printf("%d\n", x);
    printf("%d\n", *ptr);

    (*ptr)++;

    printf("%d\n", x);
    printf("%d\n", *ptr);

    return 0;
}