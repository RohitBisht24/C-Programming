#include<stdio.h>

// First function
void forIndian()
{
    printf("Namaste");
}

// Second function
void forFrench()
{
    printf("Bonjour");
}

// main function
int main()
{
    char ch;

    // take input for user
    printf("Enter f for french & i for indian : ");
    scanf(" %c", &ch);  // i

    if(ch == 'i')
    {
        forIndian();
    }
    else
    {
        forFrench();
    }
    return 0;
}