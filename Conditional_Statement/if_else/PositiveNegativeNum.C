#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");   
   result  = scanf("%d", &num);  

    if(result == 0) { 
        printf("Invalid input! Please enter a valid number.\n");
        return 0;
    }
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    else if (num < 0) {
        printf("The number is Negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }
    return 0;
}