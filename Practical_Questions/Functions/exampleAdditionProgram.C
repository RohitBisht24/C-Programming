#include<stdio.h>

// user defined function
int TwoNumSum(int x , int y)      // parameter / formal parameter
{
    int sum = a + b;
    return sum ;
}


// main function
int main()
{
    int a , b;
    int result;
    printf("Enter the first Number : ");
    scanf("%d", &a); //12

    printf("Enter the second Number : ");
    scanf("%d", &b); //2

    result = TwoNumSum(a , b);  // 14    // argument  /  actual parameter

    printf("sum is : %d\n", result);

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}



