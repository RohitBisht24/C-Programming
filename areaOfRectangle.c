#include<stdio.h>

int main()
{
    int lenght, breadth, area;

    printf("Enter the length for area of rectangle : ");
    scanf("%d", &lenght);

    printf("Enter the breadth for area of rectangle : ");
    scanf("%d", &breadth);

    area = lenght * breadth;
    printf("The area of Rectangle is : %d", area);
    return 0;
}