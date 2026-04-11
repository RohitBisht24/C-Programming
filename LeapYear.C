#include <stdio.h>

int main() {
    int year;

    // User se input lena
    printf("Enter a year: ");
    scanf("%d", &year);

    // Step 1: 400 se divisible check
    if (year % 400 == 0) {
        printf("Leap Year\n");
        printf("Reason: Year is divisible by 400\n");
    }

    // Step 2: 100 se divisible check (but 400 nahi tha, isliye yaha aaya)
    else if (year % 100 == 0) {
        printf("Not a Leap Year\n");
        printf("Reason: Year is divisible by 100 but NOT by 400\n");
    }

    // Step 3: 4 se divisible check
    else if (year % 4 == 0) {
        printf("Leap Year\n");
        printf("Reason: Year is divisible by 4 but NOT by 100\n");
    }

    // Step 4: koi bhi condition match nahi hui
    else {
        printf("Not a Leap Year\n");
        printf("Reason: Year is NOT divisible by 4\n");
    }

    return 0;
} 