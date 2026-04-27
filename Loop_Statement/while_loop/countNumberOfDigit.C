#include <stdio.h>
int main()
{
    int count = 0;
    int num;
    
    printf("Enter the Number to count number of digits : ");
    scanf("%d", &num);
    
    // i = 0;
    while(num > 0){
        num = num / 10;   // remove last digit
        count++;
    }
    return 0;
}