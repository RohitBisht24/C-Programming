#include<stdio.h>
int main()
{
    int temp; 
    int num1 = 5;
    int num2 = 12;

    temp = num1;
    num1  = num2;
     num2 = temp;
     

     printf(num1);
     printf(num2);
}