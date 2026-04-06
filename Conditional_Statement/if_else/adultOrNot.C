#include<stdio.h>
int main()
{
    int age = 20;
    if(age >= 18)
    {
        printf("Adult\n");
        printf("they can vote\n");
        printf("they can drive\n");
    }
    else 
    {
        printf("child");
    }
    return 0;
}