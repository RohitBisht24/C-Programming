#include <stdio.h>
int main()
{
    int count = 0;
    int num = 101;
    
    printf("Enter the Number to count number of digits : ");
    scanf("%d", &num);
        int i = 0;
    while(num > 0){
        num = num / 10;   // remove last digit
        count++;
    }
    printf("%d", count);
    return 0;
} 