#include<stdio.h>

int twoSum(int x , int y)
{
    int sum = x + y;
    return sum;
}
void recufunc(int count){
    if(count == 0){
        return;
    }
    printf("hello\n");
    recufunc(count - 1);
}
int main()
{
    // int a, b;
    // printf("Enter the First Number : ");
    // scanf("%d", &a);
    // printf("Enter the Second Number : ");
    // scanf("%d", &b);

    // int sum = twoSum(a, b);
    // printf("Product is : %d\n", sum);
    recufunc(5);
}
