//  Example of : Call By Value
#include<stdio.h>

void addition(int num)
{
    num = num + 5;
    printf("Sum is : %d\n", num);  //15
}

int main()
{
    int num = 10;

    addition(num);

    printf("main func sum is : %d\n", num);   //10
    return 0 ;
}

#include<stdio.h>











