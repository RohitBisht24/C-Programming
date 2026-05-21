#include <stdio.h>

void printAddress(int *n );  // function declaration

void printAddress(int *n )
{
    printf("%p\n", n);
}


int main()
{
    int n = 4;

    printf("%p\n", &n);  // address of n 

    printAddress(&n);
    return 0;
}




