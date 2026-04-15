// write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three sides of the triangle:\n");

    printf("Enter First side: ");
    scanf("%d", &a);

    printf("Enter Second side: ");
    scanf("%d", &b);

    printf("Enter Third side: ");
    scanf("%d", &c);

    // check for positive sides
    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid input! Sides must be positive.\n");
    }
    else if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if(a == b && b == c)
        {
            printf("Equilateral Triangle\n");
        }
        else if(a == b || b == c || a == c)
        {
            printf("Isosceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}