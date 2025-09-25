// Calculate the area of a circle andmodify tha same pragram to calculate the volume of a cylinder given its radius and heigh.

#include<stdio.h>
int main()
{
    int radius, height;
    printf("Enter the radius to area of circle : ");
    scanf("%d", &radius);

    printf("Enter the height to valume of circle : ");
    scanf("%d", &height);

    printf("The area of a circle with radius %d is : %f\n", radius, 3.14*radius*radius);
    printf(" The volume of cylinder with radius %d and height %d is : %f", radius,height , 3.14*radius*radius*height);
    return 0;
} 