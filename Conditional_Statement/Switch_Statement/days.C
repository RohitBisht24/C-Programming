#include <stdio.h>
int main()
{
    int days;
    printf("Enter the days 1-7 : ");
    scanf("%d", &days);

    switch(days){
        case 1: printf("case 1");
                break;
        case 2: printf("case 2");
                break;
        case 3: printf("case 3");
                break;
        case 4: printf("case 4");
                break;
        default: printf("invalid");
        
    }
    return 0;
}