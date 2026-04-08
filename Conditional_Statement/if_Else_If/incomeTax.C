#include<stdio.h>
int main()
{
    int income, tax;
    printf("Enter the income : ");
    int result = scanf("%d", &income);

    if(result == 0){
        printf("Invalid Input!\n");
        printf("use only Numbers, Please try again.");
        return 0;
    }

    if(income > 0 && income <= 500000){
        printf("0 percent Tax is payable.\n");
        tax = 0;
    }
    else if(income > 500000 && income <= 1000000){
        printf("20 percent Tax is Payable.\n");
        tax = (int)(income*0.2);
    }
    else if(income > 1000000){
        printf("30 percent Tax is Payable.\n");
        tax = (int)(income*0.3);
    }
    else{
        printf("invalid Input.");
        return 0;
    }
    printf("your total payble tax is : %d", tax);
    return 0;
}