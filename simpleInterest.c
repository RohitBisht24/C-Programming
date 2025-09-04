//Write a Program to calclulate simple interest for a set of values representing principal, number of years and rate of interest.

#include<stdio.h>

int main()
{
    int principle, rate, time, SI;
    
    printf("Enter the Principle of a product : ");
    scanf("%d", &principle);
    printf("Enter the rate of Product : ");
    scanf("%d", &rate);
    printf("Enter the time of time(year) of a Product : ");
    scanf("%d", &time);

    SI = (principle*rate*time)/100;

    printf("Simple of Interest is : %d", SI);

    return 0;
}