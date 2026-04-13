// If cost price and selling price of an item are input through the keyboard, write a C program to determine whether the seller has made a profit or incurred a loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>
int main()
{
    float CP, SP;       // CP = cost price,   SP =  Selling price

    // take input form user
    printf("Enter Cost price : ");
    scanf("%f", &CP);

    printf("Enter Selling price : ");
    scanf("%f", &SP);

    // check condition
    if(SP > CP){
        printf("Profit = %.2f\n", SP - CP);
    }
    else if(SP < CP){
        printf("Loss = %.2f\n", CP - SP);
    }
    else if(SP == CP){
        printf("No Profit, NO Loss\n");
    }
    return 0;
}