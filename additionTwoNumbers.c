// Write a program to add two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Entert the First Number : ");
    scanf("%d", &num1);

    printf("Enter the Second Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Addition Sum is : %d", sum);
    return 0;
}