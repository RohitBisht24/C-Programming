// C Program to generate multiplication table of a given number.
#include<stdio.h>
int main()
{
    int num;
    
    // take the number s an input for the user
    printf("Enter the value of number whose multiplication table is to be printed : ");
    scanf("%d", &num);

    for(int i= 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",num, i, num*i);
    }
}