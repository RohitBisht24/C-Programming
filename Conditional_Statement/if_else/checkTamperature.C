#include<stdio.h>
int main()
{
    int num ; 
    printf("Enter the Fever tamperature : ");
    scanf("%d", &num);

    if(num >= 100)
    {
        printf("you have a Fever. ");
    }
    else
    {
        printf(" you don't have a fever. ");
    }
    return 0;
}