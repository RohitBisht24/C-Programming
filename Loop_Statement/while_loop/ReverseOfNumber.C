#include <stdio.h>
int main()
{
    int n = 12345;
    int  lastDigit;
    int check;

    while(n > 0){
        lastDigit = n % 10;
        check = lastDigit    //  2
        printf("%d", lastDigit);
        n = n / 10;
    }
    return 0;
}