#include <stdio.h>
int main()
{
    int num;
    printf("Enter the integer Number : ");
    scanf("%d", &num);

    if(num > 0){
        if(num%2 == 0){
            printf("Number is Positive with even.");
        }
        else{
            printf("Number is Positive with Negative");
        }
    }
    else{
        printf("Number is Negative.");
    }
    return 0;
}