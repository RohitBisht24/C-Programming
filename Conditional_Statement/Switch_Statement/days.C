#include <stdio.h>
int main()
{
    char days;
    
    printf("Enter days(1 - 7) : ");      
    scanf("%c", &days);  

    switch(days)
    {
        case '+' : printf("Monday\n");   
                break; 
        case 'b': printf("Tuesday\n");
                break;
        case 'c': printf("Wednesday\n");
                break;
        case 'd' : printf("Thursday\n");
                break;
        case 'e' : printf("Friday\n");
                break;
        case 'f' : printf("Saturday\n");
                break;
        case 'g' : printf("Sunday\n");
                break;
        default:printf("Not a valid day!\n ");
    }
    return 0;
}

