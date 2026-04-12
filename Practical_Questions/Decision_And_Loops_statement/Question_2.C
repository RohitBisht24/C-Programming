// Write a program to check whether a number is negative , positive or zero.
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the integer Number : ");
    int result = scanf("%d", &num);

    if(result == 0){
        printf("Invalid input! Please anter a valid Number.\n");
    }
    else if(num < 0){
        printf("the Number is Negative.\n");
    }
    else if(num >= 1){
        printf("the Number is Positive.\n");
    }
    else{
        printf("the Number is Zero.\n");
    }
    return 0;
}