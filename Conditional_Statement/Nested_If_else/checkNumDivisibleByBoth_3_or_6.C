#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    if(num%3 == 0)
    {
        if(num%6 == 0){
            printf("Number is divisible by both 3 and 6");
        }
        else{
            printf("Number is divisible by only 3");
        }
    }
    else{
            printf("Number is not divisible by both 3 and 6");
    }
}