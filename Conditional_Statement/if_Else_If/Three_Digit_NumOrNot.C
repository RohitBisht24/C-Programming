#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num >= 100 && num<=999)
    {
        printf("It is a three digit number.");
    }
    else
    {
        printf("The number is not a three digit number.");
    }
    return 0;
}