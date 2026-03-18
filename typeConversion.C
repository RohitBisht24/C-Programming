// Type conversion is a funcdamental concept that allows develops to convert 
// data form one data type to another.
#include<stdio.h>
#include<math.h>
int main()
{
    // printf("%d", 2*2 );  // 4
    // printf("%d\n", 2.0 * 2 );   // through garbage value  0
    // printf("%f\n", 2.0 * 2 );   //4.0000
    // printf("%f\n", 2.0 * 2.0 );   //4.0000
    // printf("%f\n", 4 / 2.0 );   //2.0000
    // printf("%d\n", 2 / 3 );   //0
    // printf("%f\n", 2.0 / 3 );   //0.666667


    long a = 2147483648;
    int b;
    b = a;
    printf("%d", b);


    return 0;
}

