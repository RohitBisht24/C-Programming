// Write a program to check whether a number is even or odd.
#include <stdio.h>
int main()
{
    int num ;
    printf("Enter the Number to check Even or Odd : ");
    int result = scanf("%d", &num);

    if(num > 0 && result == 1){
        if(num%2 == 0){
        printf("%d is Even Number.", num);
        }
        else{
            printf("%d is Odd Number.", num);
        }
    }
    else{
        printf("Invalid Input! please anter a integer Numbers. ");
    }
    return 0;
}