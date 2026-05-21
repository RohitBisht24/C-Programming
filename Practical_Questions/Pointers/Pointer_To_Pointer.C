#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr;

    // for printing addresses
    printf("%p\n", &age);  //  address of age
    printf("%p\n", ptr);  // value of ptr = age address
    printf("%p\n", pptr);  // value of pptr = address of ptr = address age
    printf("%p\n", &pptr);  // address of pptr

    // for printing values
    printf("%d\n", **pptr);
    return 0;
}
