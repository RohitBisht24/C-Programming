#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number to check divisible 5 or not : ");
    scanf("%d", &num);

    if(num % 5 == 0)
    {
        printf("%d is divisible by 5 ", num);
    }
    else    
    {   
        printf("%d is not divisible by 5 ", num);
    }
    return 0;
}