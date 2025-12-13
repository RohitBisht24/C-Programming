// Accept two integers from user and print the sum (Ex - The sum of 45 & 12 = 57)
#include<stdio.h>
int main()
{
    int num1, num2, sum;
     
    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    sum =  num1 + num2;
    printf("The sum of %d & %d = %d",num1, num2, sum);
    return 0;
}