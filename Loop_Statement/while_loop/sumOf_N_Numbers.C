#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int sum = 0;

    // user inputs
    printf("Enter the Number : ");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }
    printf("Total Sum of N Number is : %d", sum);
    return 0;
}