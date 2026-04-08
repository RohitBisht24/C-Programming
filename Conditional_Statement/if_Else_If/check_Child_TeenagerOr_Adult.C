#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    int result = scanf("%d", &age);

    if(result == 0){
        printf("invalid input!\n");
        printf("Please Try again.");
        return 0;
    }

    if(age == 0){
        printf("Oh you are a newborn baby :)");
    }
    else if(age >= 1 && age <= 12)
    {
        printf("Child");
    }
    else if(age >= 13 && age <= 18 )
    {
        printf("Teenager");
    }
    else if(age >= 19 && age < 50 )
    {
        printf("Adult");
    }
    else if(age >= 50 && age <= 100 )
    {
        printf("Senior Citizen");
    }
    else
    {
        printf("Invalid Input!\n");
        printf("Please try again.");
    }

    return 0;
}