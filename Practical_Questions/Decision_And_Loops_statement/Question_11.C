// Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
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

    return 0;
}