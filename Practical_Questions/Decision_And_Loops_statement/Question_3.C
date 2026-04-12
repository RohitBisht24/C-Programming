// Write a program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main()
{
    int num ;
    printf("Enter the Number to check divisible 5 and 11 or not : ");
    scanf("%d", &num);

    if(num%5 == 0 && num%11 == 0 ){
        printf("%d is divisible by 5 and 11.", num);
    }
    else{
        printf("%d is not divisible by 5 and 11.", num);
    }
    return 0;
}