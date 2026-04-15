// write a program to input all sides of triangle and check whether triangle is calid or not.
#include <stdio.h>
int main()
{
    int a , b, c;
    printf("Enter values of three side of triangle :-\n");
    printf("Enter the first side : ");
    scanf("%d", &a);

    printf("Enter the second side : ");
    scanf("%d", &b);

    printf("Enter the third side : ");
    scanf("%d", &c);

    // check validity
    if((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Triangle is Valid\n");
    }
    else
    {
        printf("Triangle is Not Valid\n");
    }
    return 0;
}