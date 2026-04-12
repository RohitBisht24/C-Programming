//Write a program to check whether a year is leap year ot not.
#include <stdio.h>
int main()
{
    int year;

    printf("Enter the year to check leap year or not : ");
    scanf("%d", &year);

    if(year%400 == 0){
        printf("%d is a Leap year.", year);
    }
    else if(year%100 == 0){
        printf("%d is not a Leap year.", year);
    }
    else if(year%4 == 0){
        printf("%d is a Leap year.", year);
    }
    else{
        printf("%d is not Leap year.", year);
    }
    return 0;
}