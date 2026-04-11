#include <stdio.h>
int main()
{
    int button = 2;

    switch(button)
    {
        case 1: printf("light\n");
                break;
        case 2: printf("fan\n");
                break;
        case 3: printf("AC\n");
                break;
        default : printf("invalid value\n");
    }
    return 0;
}