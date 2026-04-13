// Given the length and breadth of a rectangle, write a C program to find whether the area of the rectangle is greater than its perimeter.
#include <stdio.h>
int main()
{
    float length, breadth;
    float area, perimeter;

    // input form user
    printf("Enter length : ");
    scanf("%f", &length);

    printf("Enter breadth : ");
    scanf("%f", &breadth);

    // calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // check conditions
    if(area > perimeter){
        printf("Area is greater than Perimeter.\n");
    }else{
        printf("Area is Not greater than Perimeter.\n");
    }
    return 0;
}