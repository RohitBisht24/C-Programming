// #include <stdio.h>
// int main()
// {
//     int age = 22;
//     int *ptr = &age;

//     // for printing addresses
//     // printf("%p\n", &age);
//     // printf("%p\n", ptr);
//     // printf("%p", &ptr);  //  address of pointer

//     // for printing values
//     printf("%d\n", age ); // 22
//     printf("%d\n", *ptr); // 22
//     printf("%d\n", *(&age)); // 22



//     // printf("%u", &age); 
//     return 0;
// }



#include <stdio.h>

int main() {
    int age = 25;

    // Printing the value of the variable
    printf("Value: %d\n", age);

    // Printing the memory address of the variable
    printf("Memory Address: %p\n", (void*)&age);

    return 0;
}
