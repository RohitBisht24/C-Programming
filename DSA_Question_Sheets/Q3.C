//Accept the User's name, age and print in following manner (Ex - Hello Shery, you are 12 years old.)
#include <stdio.h>

int main() {
    char name[50];   // Array to store name
    int age;

    printf("Enter your name: ");
    scanf("%s", name);   // Reads string (without spaces)

    printf("Enter your age: ");
    scanf("%d", &age);   // Reads integer

    printf("Hello %s, you are %d years old.\n", name, age);

    return 0;
}
