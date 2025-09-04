//Write a program to convert Celsius (Centigrade degrees temperture to Faheinheit.
#include<stdio.h>

int main()
{
    float celsius, tamp;

    printf("Enter the celsius : ");
    scanf("%f", &celsius);

    tamp = (9.0/5.0)*celsius + 32;
    printf("tamplreture of Fehrenheit is : %f", tamp);
    return 0;
}