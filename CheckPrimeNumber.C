// write a program to check number is prime or not.
#include <stdio.h>
int main()
{
    int n, i;
    int isPrime = 1;
    
    printf("Enter the Number to check Prime or not : ");
    scanf("%d", &n);

    if(n <= 1){
        isPrime = 0;
    }
    else 
    {
        for(int i = 2; i<=n-1; i++)
        {
            if(n%i==0){
                isPrime = 0;   // Non-Prime Number
                break;
            }
        }
    }

    if(isPrime == 1){
        printf("Prime Number");
    }
    else 
    {
        printf("Non-Prime Number.");
    }
    return 0;
}